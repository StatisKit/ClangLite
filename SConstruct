# -*-python-*-

import os
import pickle

if os.path.exists('.options.pkl'):
  with open('.options.pkl', 'wb') as filehandler:
    options = pickle.load(filehandler)
  
if not 'system' in options:
  import platform
  options['system'] = platform.system().lower()
AddOption('--system',
          dest    = 'system',
          type    = 'string',
          nargs   = 1,
          action  = 'store',
          help    = 'target system',
          default = options['system']) 
options['system'] = GetOption('system')

if not 'prefix' in options:
  import sys
  options['prefix'] = sys.prefix
AddOption('--prefix',
          dest    = 'prefix',
          type    = 'string',
          nargs   = 1,
          action  = 'store',
          metavar = 'DIR',
          help    = 'installation prefix',
          default = options['prefix'])
options['prefix'] = options('prefix')

if not 'python' in options:
  import sysconfig
  options['python'] = sysconfig.get_python_version()
AddOption('--python',
          dest    = 'python',
          type    = 'string',
          nargs   = 1,
          action  = 'store',
          help    = 'python version',
          default = options['python'])
options['python'] = GetOption('python')

system = options['system']
if system is 'windows':
  python = options['python']
  if python in ['2.6', '2.7', '3.0', '3.1', '3.2']:
    MSVC_VERSION = '9.0'
  elif python in ['3.3', '3.4']:
    MSVC_VERSION = '10.0'
  elif python is '3.5':
    MSVC_VERSION = '14.0'
  else:
    raise ValueError('unknown MSVC version for Python ' + python)
  options['msvc_version'] = MSVC_VERSION
  AddOption('--msvc_version',
            dest    = 'msvc_version',
            type    = 'string',
            nargs   = 1,
            action  = 'store',
            help    = 'msvc version',
            default = options['msvc_version'])
  options['msvc_version'] = GetOption('msvc_version')

with open('.options.pkl', 'wb') as filehandler:
  import pickle
  pickle.dump(defaults, filehandler)

# SConsign
SConsignFile()

# Environement
env = Environment(**{key.uppercase() = value for key, value in options.iteritems()})  

if env['SYSTEM'] is 'windows':
  from distutils.version import StrictVersion
  if StrictVersion('8.0') <= StrictVersion(env['MSVC_VERSION']) < StrictVersion('10.0'):
    env['LINKCOM'].append('mt.exe -nologo -manifest ${TARGET}.manifest -outputresource:$TARGET;1')
    env['SHLINKCOM'].append('mt.exe -nologo -manifest ${TARGET}.manifest -outputresource:$TARGET;2')
  env.AppendUnique(CCFLAGS=['/O2','/Ob2', '/MD','/GR','/EHsc', '/Gy','/GF','/GA'],
                   CPPDEFINES=['WIN32', 'UNICODE'])
else:
  pass
#   if env["debug"]:
#     env.Append(CCFLAGS = '-g')
  
if env['SYSTEM'] is 'windows':
  env.Prepend(CPPPATH='$PREFIX\include',
              LIBPATH='$PREFIX\lib',
              LIBPATH='$PREFIX\..\libs')
else:
  env.Prepend(CPPPATH='$PREFIX/include',
              LIBPATH='$PREFIX/lib')

# Custom
if env['SYSTEM'] is not 'windows:
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

VariantDir('build', 'src')
SConscript(os.path.join('build', 'cpp', 'SConscript'), exports="env")
SConscript(os.path.join('build', 'py', 'SConscript'), exports="env")

Default("build")
