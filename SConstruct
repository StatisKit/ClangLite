# -*-python-*-

import os
import subprocess

import pickle
import shutil

if not exists('.toolchain.pkl'):
    from git import Repo
    toolchain = Repo.clone_from('https://gist.github.com/c491cb08d570beeba2c417826a50a9c3.git', 'toolchain')
    process = subprocess.Popen(['python toolchain' + os.sep + 'toolchain.py'], stdout=subprocess.PIPE)
    out, err = process.communicate()
    toolchain = out.strip()
    with open('.toolchain.pkl', 'w') as filehandler:
        pickle.dump(toolchain, filehandler)
    shutil.rmtree('toolchain')
else:
    with open('.toolchain.pkl', 'r') as filehandler:
        toolchain = pickle.load(filehandler)

AddOption('--toolchain',
  dest='toolchain',
  type='string',
  nargs=1,
  action='store',
  help='toolchain to use',
  default=toolchain)


if not exists('.prefix.pkl'):
    import sys
    prefix = sys.prefix
    with open('.prefix.pkl', 'w') as filehandler:
        pickle.dump(prefix, filehandler)
else:
    with open('.prefix.pkl', 'r') as filehandler:
        prefix = pickle.load(filehandler)

AddOption('--prefix',
  dest='prefix',
  type='string',
  nargs=1,
  action='store',
  metavar='DIR',
  help='installation prefix',
  default=prefix)

SConsignFile()

# Compiler
variables = Variables()

#variables.Add(BoolVariable('debug', 
#                      'compilation in a debug mode',
#                       False))
# variables.Add(BoolVariable('warnings',
#                       'compilation with -Wall and similar',
#                       False))
# variables.Add(BoolVariable('static',
#                       '',
#                       False))

# operating_system = os.name.lower()
# platform = sys.platform.lower()

# if operating_system == 'posix':
#     compilers = ['gcc', 'clang']
# elif operating_system == 'nt' and platform.startswith('win'):
#     compilers = ['mingw', 'msvc']
# else:
#     raise "Add compiler support for the " + operating_system + " operating system"

# variables.Add(EnumVariable('compiler',
#                            'compiler tool used for the build',
#                            compilers[0],
#                            compilers))

env = Environment(PREFIX = GetOption('prefix'), TOOLCHAIN = GetOption('toolchain'))

variables.Update(env)

# if ARGUMENTS.get('debug', 0):
#   env.Append(CCFLAGS = '-g')

# if platform == 'cygwin':
#     env.AppendUnique(CPPDEFINES = 'SYSTEM_IS__CYGWIN')
# elif platform.startswith('win'):
#     env.AppendUnique(CPPDEFINES = 'WIN32')
#     if env['compiler'] == 'mingw':
#         env['compiler_libs_suffix'] = '-mgw'
#     elif env['compiler'] == 'msvc':
#         env['compiler_libs_suffix'] = '-vc80'
#     else:
#         raise "Add library suffixes support for the " + env['compiler'] + " compiler"

from distutils import sysconfig
env.AppendUnique(LIBS = ['boost_python', 'python' + sysconfig.get_python_version()])
env.AppendUnique(CPPPATH = [sysconfig.get_python_inc()])
env.AppendUnique(CPPDEFINES = ['BOOST_PYTHON_DYNAMIC_LIB'])


env.Prepend(CPPPATH='$PREFIX/include')
env.Prepend(LIBPATH='$PREFIX/lib')

if not env['TOOLCHAIN'].startswith('vc'):
    env.AppendUnique(CXXFLAGS=['-std=c++0x',
                               '-fvisibility-inlines-hidden',
                               '-ffunction-sections',
                               '-fdata-sections',
                               '-Wno-deprecated-declarations'])

env.Append(CPPDEFINES = ['_GNU_SOURCE', '__STDC_CONSTANT_MACROS',
                         '__STDC_FORMAT_MACROS', '__STDC_LIMIT_MACROS'])

env.AppendUnique(LIBS=['boost_python',
                       'clangIndex',
                       'clangARCMigrate',
                       'clangRewriteFrontend',
                       'clangFormat',
                       'clangTooling',
                       'clangToolingCore',
                       'clangFrontend',
                       'clangDriver',
                       'clangSerialization',
                       'clangParse',
                       'clangSema',
                       'clangStaticAnalyzerCheckers',
                       'clangStaticAnalyzerCore',
                       'clangRewrite',
                       'clangAnalysis',
                       'clangEdit',
                       'clangASTMatchers',
                       'clangAST',
                       'clangLex',
                       'clangBasic'])

process = subprocess.Popen(['llvm-config', '--libs'], stdout=subprocess.PIPE)
out, err = process.communicate()
if env['TOOLCHAIN'].startswith('vc'):
    print out
else:
    env.AppendUnique(LIBS=[lib.strip() for lib in out.strip().split('-l') if lib])


process = subprocess.Popen(['llvm-config', '--system-libs'], stdout=subprocess.PIPE)
out, err = process.communicate()
if env['TOOLCHAIN'].startswith('vc'):
    print out
else:
    env.AppendUnique(LIBS=[lib.strip() for lib in out.strip().split('-l') if lib])

VariantDir('build', 'src')
SConscript(os.path.join('build', 'cpp', 'SConscript'), exports="env")
SConscript(os.path.join('build', 'py', 'SConscript'), exports="env")

Default("build")
