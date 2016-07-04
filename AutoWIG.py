import os
for filepath in ('src'/'wrapper').walkfiles('*.[hc]*'):
    os.remove(filepath.abspath())

from autowig import autowig
asg = autowig.AbstractSemanticGraph()
import subprocess
popen = subprocess.Popen(['clang++', '-x', 'c++', '-v', '-E', '/dev/null'], stdout=subprocess.PIPE,
                        stderr=subprocess.PIPE)
out, err = popen.communicate()
sysincludes = err.splitlines()
headers = []
flags = ['-x', 'c++', '-std=c++11', '-D__STDC_LIMIT_MACROS', '-D__STDC_CONSTANT_MACROS']
if '#include <...> search starts here:' not in sysincludes or 'End of search list.' not in sysincludes:
    warnings.warn('System includes not computed: parsing clang command output failed', Warning)
else:
    lindex = sysincludes.index('#include <...> search starts here:')
    rindex = sysincludes.index('End of search list.')
    sysincludes = sysincludes[lindex+1:rindex]
flags.extend(['-I'+str(path(sysinclude.strip()).abspath()) for sysinclude in sysincludes])
for sysinclude in sysincludes:
    sysinclude = path(sysinclude.strip())
    clanginclude = sysinclude/'clang'
    if clanginclude.exists():
        headers.extend([str(header.abspath()) for header in clanginclude.walkfiles('*.h')])
autowig.parser(asg, headers, flags=flags, bootstrap=False)

from autowig.default_controller import refactoring

def bootstrap_controller(asg):
    asg = refactoring(asg)
    for node in asg.nodes('::clang::ASTUnit::top_level_(begin|end)'):
        if not node.return_type.boost_python_export:
            node.return_type.boost_python_export = True
    for node in asg.nodes('^class ::std::(shared|weak|unique)_ptr$'):
        node.is_copyable = False
        node.is_smart_pointer = True
    node = asg.nodes('::clang::HeaderSearch::NormalizeDashIncludePath').pop()
    node.boost_python_export = False
    for node in asg.nodes('::clang::DeclSpec::(TSCS|TSW|TSS|TST)_'):
        node.boost_python_export = False

autowig.controller['bootstrap'] = bootstrap_controller
autowig.controller.plugin = 'bootstrap'
autowig.controller(asg)

def bootstrap_generator(asg)
    subset = asg.nodes('::clang::tooling::buildASTFromCodeWithArgs')
    classes = [asg['class ::clang::PCHContainerOperations'], asg['class ::clang::Type'], asg['class ::clang::Decl']]
    subset += classes
    subset += classes[0].subclasses(recursive=True)
    subset += classes[1].subclasses(recursive=True)
    autowig.generator.plugin = 'boost_python'
    wrappers = autowig.generator(asg, subset,
            module=rootdir/'src'/'wrapper'/'_clanglite.cpp',
            decorator=rootdir/'src'/'clanglite'/'_clanglite.py', closure=True)

for wrapper in wrappers:
    wrapper.write()

session = autowig.scons(rootdir, '-k', '-j6', '-k', pipe=False)
err = ''
feedback = autowig.feedback(session, '.', asg,
                            variantdir='build',
                            tabsize=4, indent=0,
                            force=True)

while not session.err == err:
    err = session.err
    exec feedback
    for wrapper in wrappers:
        if wrapper.on_disk:
            wrapper.write()
    session = autowig.scons(rootdir,
                            '-k', '-j6', pipe=False)
    feedback = autowig.feedback(session, rootdir, asg,
                            variantdir='build',
                            tabsize=4, indent=0,
                            force=True)
session

