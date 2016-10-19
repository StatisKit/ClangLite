# -*-python-*-

import os
import subprocess
import sys
import pickle

# Options
if os.path.exists('.options.pkl'):
  with open('.options.pkl', 'rb') as filehandler:
    defaults = pickle.load(filehandler)
  AddOption('--toolchain',
            dest    = 'toolchain',
            type    = 'string',
            nargs   = 1,
            action  = 'store',
            help    = 'toolchain to use',
            default = defaults['toolchain'])
else:
  AddOption('--toolchain',
            dest   = 'toolchain',
            type   = 'string',
            nargs  = 1,
            action = 'store',
            help   = 'toolchain to use')
  defaults = dict(prefix = sys.prefix)
  
AddOption('--prefix',
          dest    = 'prefix',
          type    = 'string',
          nargs   = 1,
          action  = 'store',
          metavar = 'DIR',
          help    = 'installation prefix',
          default = defaults['prefix']) 

defaults['toolchain'] = GetOption('toolchain')
defaults['prefix'] = GetOption('prefix')
with open('.options.pkl', 'wb') as filehandler:
  pickle.dump(defaults, filehandler)

# Variables
variables = Variables(".variables.py", ARGUMENTS)

variables.Add(BoolVariable('debug', 
                     'compilation in a debug mode',
                      False))
variables.Add(BoolVariable('warnings',
                      'compilation with -Wall and similar',
                      False))
variables.Add(BoolVariable('static',
                      '',
                      False))

# SConsign
# SConsignFile()

# Environement
TOOLCHAIN = GetOption('toolchain')
if TOOLCHAIN.startswith('vc'):
  MSVC_VERSION = TOOLCHAIN.lstrip('vc')
  if '.' not in MSVC_VERSION:
    MSVC_VERSION += '.0'
  env = Environment(PREFIX = GetOption('prefix'), TOOLCHAIN = TOOLCHAIN, MSVC_VERSION = MSVC_VERSION)
else:
  env = Environment(PREFIX = GetOption('prefix'), TOOLCHAIN = TOOLCHAIN)  
variables.Update(env)
variables.Save('.variables.py', env)

if env['TOOLCHAIN'].startswith('vc'):
  env['CC'] = '"C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\bin\\cl.exe"'
  env.AppendUnique(CPPPATH=['C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\include',
                            'C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\ATLMFC\\include',
                            'C:\\Program Files (x86)\\Windows Kits\\10\include\\10.0.14393.0\\ucrt',
                            'C:\\Program Files (x86)\\Windows Kits\\NETFXSDK\\4.6.1\include\\um',
                            'C:\\Program Files (x86)\\Windows Kits\\10\include\\10.0.14393.0\\shared',
                            'C:\\Program Files (x86)\\Windows Kits\\10\include\\10.0.14393.0\\um',
                            'C:\\Program Files (x86)\\Windows Kits\\10\include\\10.0.14393.0\\winrt'])
  env.AppendUnique(LIBPATH=['C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\lib'])
  if 8 <= int(float(env['MSVS_VERSION'])) < 10:
    env['LINKCOM'] = [env['LINKCOM'], 'mt.exe -nologo -manifest ${TARGET}.manifest -outputresource:$TARGET;1']
    env['SHLINKCOM'] = [env['SHLINKCOM'], 'mt.exe -nologo -manifest ${TARGET}.manifest -outputresource:$TARGET;2']
  CCFLAGS = []
  CPPDEFINES = ['WIN32']
  if env["debug"]:
     # Optimization
     # Od2: disable optimizations
     CCFLAGS.extend(['/Od'])
     # language
     # /Zi enable debugging information
     CCFLAGS.extend(['/Zi'])
     # code generation
     # /GZ: enable runtime debug checks
     # /Gm: enable minimal rebuild
     CCFLAGS.extend(['/GZ','/Gm'])
     CPPDEFINES.append('_DEBUG')
  else:
     # Optimization
     # /O2: maximum speed
     # /ob2: inline expansion (n=2)
     CCFLAGS.extend(['/O2','/Ob2'])
     # code generation
     # /Gy: separate functions for linker
     # /GF: enable read-only string pooling
     # /GA: enable for Windows Application
     # /GR: enable C++ RTTI
     CCFLAGS.extend(['/Gy','/GF','/GA'])
  CCFLAGS.extend(['/MD','/GR','/EHsc'])
  CPPDEFINES.append('UNICODE')
  env.AppendUnique(CCFLAGS=CCFLAGS,
                   CPPDEFINES=CPPDEFINES)
else:
  if env["debug"]:
    env.Append(CCFLAGS = '-g')

from distutils import sysconfig
if sysconfig.get_python_inc():
  pyinc = sysconfig.get_python_inc()
  env.AppendUnique(CPPPATH=[pyinc])
if env['TOOLCHAIN'].startswith('vc'):
  env.AppendUnique(LIBS = ['boost_python',
                           'python' + sysconfig.get_python_version()])
else:
  env.AppendUnique(LIBS = ['boost_python',
                           pyinc.split(os.sep)[-1]])
  env.AppendUnique(LIBPATH=[sysconfig.get_config_var('LIBDIR')])
env.AppendUnique(CPPDEFINES = ['BOOST_PYTHON_DYNAMIC_LIB', 'BOOST_ALL_NO_LIB'])
  
if env['TOOLCHAIN'].startswith('vc'):
  env.PrependUnique(CPPPATH=['$PREFIX\include'])
  env.PrependUnique(LIBPATH=['$PREFIX\lib'])
  env.PrependUnique(LIBPATH=['$PREFIX\..\libs'])
else:
  env.Prepend(CPPPATH='$PREFIX/include')
  env.Prepend(LIBPATH='$PREFIX/lib')

# Custom
if not env['TOOLCHAIN'].startswith('vc'):
    env.AppendUnique(CXXFLAGS=['-std=c++0x',
                               '-fvisibility-inlines-hidden',
                               '-ffunction-sections',
                               '-fdata-sections',
                               '-Wno-deprecated-declarations'])
else:
   env.AppendUnique(CPPDEFINES = ['_WINDOWS', 'NDEBUG',
                                  '_HAS_EXCEPTIONS=0',
                                  '_DEBUG_POINTER_IMPL=',
                                  '_CRT_SECURE_NO_DEPRECATE',
                                  '_CRT_SECURE_NO_WARNINGS',
                                  '_CRT_NONSTDC_NO_DEPRECATE',
                                  '_CRT_NONSTDC_NO_WARNINGS',
                                  '_SCL_SECURE_NO_DEPRECATE',
                                  '_SCL_SECURE_NO_WARNINGS',
                                  'CLANG_ENABLE_ARCMT',
                                  'CLANG_ENABLE_OBJC_REWRITER',
                                  'CLANG_ENABLE_STATIC_ANALYZER'],
                   CCFLAGS=['/wd4141', '/wd4146', '/wd4180',
                            '/wd4244', '/wd4258', '/wd4267',
                            '/wd4291', '/wd4345', '/wd4351',
                            '/wd4355', '/wd4456', '/wd4457',
                            '/wd4458', '/wd4459', '/wd4503',
                            '/wd4624', '/wd4722', '/wd4800',
                            '/wd4100', '/wd4127', '/wd4512',
                            '/wd4505', '/wd4610', '/wd4510',
                            '/wd4702', '/wd4245', '/wd4706',
                            '/wd4310', '/wd4701', '/wd4703',
                            '/wd4389', '/wd4611', '/wd4805',
                            '/wd4204', '/wd4577', '/wd4091',
                            '/wd4592', '/wd4324', '/errorReport:queue',
                            '/we4238', '-w14062', '/Zc:inline'])
    
env.Append(CPPDEFINES = ['_GNU_SOURCE', '__STDC_CONSTANT_MACROS',
                         '__STDC_FORMAT_MACROS', '__STDC_LIMIT_MACROS'])

env.AppendUnique(LIBS=['clangIndex',
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
env.AppendUnique(LIBS=[lib.strip() for lib in out.decode('ascii', 'ignore').strip().split('-l') if lib])


process = subprocess.Popen(['llvm-config', '--system-libs'], stdout=subprocess.PIPE)
out, err = process.communicate()
env.AppendUnique(LIBS=[lib.strip() for lib in out.decode('ascii', 'ignore').strip().split('-l') if lib])

print(env.Dump())

VariantDir('build', 'src')
SConscript(os.path.join('build', 'cpp', 'SConscript'), exports="env")
SConscript(os.path.join('build', 'py', 'SConscript'), exports="env")

Default("build")
