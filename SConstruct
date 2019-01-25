## Copyright [2017-2018] UMR MISTEA INRA, UMR LEPSE INRA,                ##
##                       UMR AGAP CIRAD, EPI Virtual Plants Inria        ##
## Copyright [2015-2016] UMR AGAP CIRAD, EPI Virtual Plants Inria        ##
##                                                                       ##
## This file is part of the AutoWIG project. More information can be     ##
## found at                                                              ##
##                                                                       ##
##     http://autowig.rtfd.io                                            ##
##                                                                       ##
## The Apache Software Foundation (ASF) licenses this file to you under  ##
## the Apache License, Version 2.0 (the "License"); you may not use this ##
## file except in compliance with the License. You should have received  ##
## a copy of the Apache License, Version 2.0 along with this file; see   ##
## the file LICENSE. If not, you may obtain a copy of the License at     ##
##                                                                       ##
##     http://www.apache.org/licenses/LICENSE-2.0                        ##
##                                                                       ##
## Unless required by applicable law or agreed to in writing, software   ##
## distributed under the License is distributed on an "AS IS" BASIS,     ##
## WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or       ##
## mplied. See the License for the specific language governing           ##
## permissions and limitations under the License.                        ##

# -*-python-*-

import os
from SCons import Errors

if not 'PREFIX' in os.environ:
  os.environ['PREFIX'] = os.environ['CONDA_PREFIX']
  
env = Environment(tools = ['system',
                           'toolchain',
                           'pybind11'])

SYSTEM = env['SYSTEM']

if not SYSTEM == 'win':
	env.AppendUnique(CXXFLAGS=['-ffunction-sections',
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
                         '__STDC_FORMAT_MACROS', '__STDC_LIMIT_MACROS', 'PYBIND11_GENERATOR'])

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

import subprocess
if not SYSTEM == 'win':
    process = subprocess.Popen(['llvm-config', '--libs'], stdout=subprocess.PIPE)
    out, err = process.communicate()
    env.AppendUnique(LIBS=[lib.strip() for lib in out.decode('ascii', 'ignore').strip().split('-l') if lib])
else:
    env.AppendUnique(LIBS=['LLVMLTO',
                           'LLVMObjCARCOpts', 
                           'LLVMSymbolize',
                           'LLVMDebugInfoPDB', 
                           'LLVMDebugInfoDWARF', 
                           'LLVMMIRParser', 
                           'LLVMLibDriver', 
                           'LLVMOption', 
                           'LLVMTableGen', 
                           'LLVMOrcJIT', 
                           'LLVMPasses', 
                           'LLVMipo', 
                           'LLVMVectorize', 
                           'LLVMLinker', 
                           'LLVMIRReader', 
                           'LLVMAsmParser', 
                           'LLVMX86Disassembler', 
                           'LLVMX86AsmParser', 
                           'LLVMX86CodeGen', 
                           'LLVMSelectionDAG', 
                           'LLVMAsmPrinter', 
                           'LLVMX86Desc', 
                           'LLVMMCDisassembler', 
                           'LLVMX86Info', 
                           'LLVMX86AsmPrinter', 
                           'LLVMX86Utils', 
                           'LLVMMCJIT', 
                           'LLVMLineEditor', 
                           'LLVMDebugInfoCodeView', 
                           'LLVMInterpreter', 
                           'LLVMExecutionEngine', 
                           'LLVMRuntimeDyld', 
                           'LLVMCodeGen', 
                           'LLVMTarget', 
                           'LLVMScalarOpts', 
                           'LLVMInstCombine', 
                           'LLVMInstrumentation', 
                           'LLVMProfileData', 
                           'LLVMObject', 
                           'LLVMMCParser', 
                           'LLVMTransformUtils', 
                           'LLVMMC', 
                           'LLVMBitWriter', 
                           'LLVMBitReader', 
                           'LLVMAnalysis', 
                           'LLVMCore', 
                           'LLVMSupport'])
    # env.AppendUnique(LIBS=[lib.strip() for lib in out.decode('ascii', 'ignore').strip().split(' ') if lib])

if not SYSTEM == 'win':
    process = subprocess.Popen(['llvm-config', '--system-libs'], stdout=subprocess.PIPE)
    out, err = process.communicate()
    env.AppendUnique(LIBS=[lib.strip() for lib in out.decode('ascii', 'ignore').strip().split('-l') if lib])
else:
    # env.AppendUnique(LIBS=[lib.strip() for lib in out.decode('ascii', 'ignore').strip().split(' ') if lib])
    env.AppendUnique(LIBS=["version.lib"])

VariantDir('build', 'src')
SConscript(os.path.join('build', 'cpp', 'SConscript'), exports="env")
SConscript(os.path.join('build', 'py', 'SConscript'), exports="env")

Default("install")
