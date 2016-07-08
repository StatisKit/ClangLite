# -*-python-*-

import os
os.system('which gcc')
os.system('which g++')
import sys
import subprocess

AddOption('--prefix',
  dest='prefix',
  type='string',
  nargs=1,
  action='store',
  metavar='DIR',
  help='installation prefix',
  default='build')

SConsignFile()

# Compiler
variables = Variables()

variables.Add(BoolVariable('debug', 
                      'compilation in a debug mode',
                       False))
variables.Add(BoolVariable('warnings',
                      'compilation with -Wall and similar',
                      False))
variables.Add(BoolVariable('static',
                      '',
                      False))

operating_system = os.name.lower()
platform = sys.platform.lower()

if operating_system == 'posix':
    compilers = ['gcc', 'clang']
elif operating_system == 'nt' and platform.startswith('win'):
    compilers = ['mingw', 'msvc']
else:
    raise "Add compiler support for the " + operating_system + " operating system"

variables.Add(EnumVariable('compiler',
                          'compiler tool used for the build',
                          compilers[0],
                          compilers))


# Update

env = Environment(PREFIX = GetOption('prefix'))
variables.Update(env)

if platform == 'cygwin':
    env.AppendUnique(CPPDEFINES = 'SYSTEM_IS__CYGWIN')
elif platform.startswith('win'):
    env.AppendUnique(CPPDEFINES = 'WIN32')
    if env['compiler'] == 'mingw':
        env['compiler_libs_suffix'] = '-mgw'
    elif env['compiler'] == 'msvc':
        env['compiler_libs_suffix'] = '-vc80'
    else:
        raise "Add library suffixes support for the " + env['compiler'] + " compiler"


# env['build_prefix'] = os.path.abspath(env['build_prefix'])
# env['build_dir'] = os.path.join(env['build_prefix'], 'src')
# env['build_bindir'] = os.path.join(env['build_prefix'], 'bin')
# env['build_libdir'] = os.path.join(env['build_prefix'], 'lib')
# env['build_includedir'] = os.path.join(env['build_prefix'], 'include')

# for suffix in ['prefix', 'dir', 'bindir', 'libdir', 'includedir']:
#     if not os.path.exists(env['build_' + suffix]):
#         os.makedirs(env['build_' + suffix])

env.Prepend(CPPPATH='$PREFIX/include')
env.Prepend(LIBPATH='$PREFIX/lib')

env.AppendUnique(CXXFLAGS=['-std=c++0x', '-fvisibility-inlines-hidden',
                     '-ffunction-sections', '-fdata-sections',
                     '-fno-exceptions'])
env.Append(CPPDEFINES = ['_GNU_SOURCE', '__STDC_CONSTANT_MACROS',
                         '__STDC_FORMAT_MACROS', '__STDC_LIMIT_MACROS'])

#process = subprocess.Popen(['llvm-config', '--includedir'], stdout=subprocess.PIPE)
#out, err = process.communicate()
#cpppath = out.strip()
#if not isinstance(cpppath, list):
#  cpppath = [cpppath]
#env.AppendUnique(CPPPATH=cpppath,
#                 CXXFLAGS='-std=c++0x')

#process = subprocess.Popen(['llvm-config', '--libdir'], stdout=subprocess.PIPE)
#out, err = process.communicate()
#libpath = out.strip()
#if not isinstance(libpath, list):
# libpath = [libpath]
#env.AppendUnique(LIBPATH=libpath)
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
env.AppendUnique(LIBS=[lib.strip() for lib in out.strip().split('-l') if lib])

process = subprocess.Popen(['llvm-config', '--system-libs'], stdout=subprocess.PIPE)
out, err = process.communicate()
env.AppendUnique(LIBS=[lib.strip() for lib in out.strip().split('-l') if lib])

# Build stage
SConscript(os.path.join('src', 'py', 'SConscript'), exports="env")

Default("python")
