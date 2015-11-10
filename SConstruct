# -*-python-*-

import os
from openalea.sconsx import config, environ
import subprocess


ALEASolution = config.ALEASolution

pj = os.path.join

SConsignFile()

options = Variables(['../options.py', 'options.py'], ARGUMENTS)
tools = ['boost_python']

env = ALEASolution(options, tools)

process = subprocess.Popen(['llvm-config', '--includedir'], stdout=subprocess.PIPE)
out, err = process.communicate()
env.AppendUnique(CPPPATH=out.strip(),
                 CXXFLAGS='-std=c++0x')

process = subprocess.Popen(['llvm-config', '--libdir'], stdout=subprocess.PIPE)
out, err = process.communicate()
env.AppendUnique(LIBPATH=out.strip(),
                 LIBS=['boost_python',
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

# Set build directory
prefix = env['build_prefix']

# Build stage
SConscript(pj(prefix,"src/wrapper/SConscript"), exports="env")

Default("build")
