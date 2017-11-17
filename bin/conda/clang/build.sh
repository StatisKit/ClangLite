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

set -ve

sed -i -e 's/*B0/*BB0/g' $SRC_DIR/include/clang/Analysis/Analyses/ThreadSafetyTraverse.h

rm -rf tools/libclang
rm -rf tools/c-arcmt-test
rm -rf tools/c-index-test

mkdir build_clang
cd build_clang

unset CXXFLAGS
unset CPPFLAGS
unset CFLAGS
unset LDFLAGS
unset LDFLAGS_CC
unset DEBUG_CFLAGS
unset DEBUG_CXXFLAGS

$GCC -x c++ -E -v /dev/null &> config.txt
export CFLAGS=`python $RECIPE_DIR/flags.py`
TMP_C_LINK_FLAGS=`python $RECIPE_DIR/link_flags.py`
echo $TMP_C_LINK_FLAGS

$GXX -x c++ -E -v /dev/null &> config.txt
export CXXFLAGS=`python $RECIPE_DIR/flags.py`
TMP_CXX_LINK_FLAGS=`python $RECIPE_DIR/link_flags.py`
echo $TMP_CXX_LINK_FLAGS

cmake -G "Unix Makefiles" -DCMAKE_C_COMPILER=${GCC} \
                          -DCMAKE_CXX_COMPILER=${GXX} \
                          -DCMAKE_LINKER=${LD} \
                          -DLLVM_USE_LINKER={$LD} \
                          -DCMAKE_EXE_LINKER_FLAGS="${TMP_C_LINK_FLAGS}" \
                          -DCMAKE_C_LINK_FLAGS="${TMP_C_LINK_FLAGS}" \
                          -DCMAKE_CXX_LINK_FLAGS="${TMP_CXX_LINK_FLAGS}" \
                          -DBUILD_SHARED_LIBS=ON \
                          -DLLVM_INCLUDE_TESTS=OFF \
                          -DLLVM_INCLUDE_UTILS=OFF \
                          -DLLVM_INCLUDE_DOCS=OFF \
                          -DLLVM_INCLUDE_EXAMPLES=OFF \
                          -DLLVM_ENABLE_TERMINFO=OFF \
                          -DLLVM_ENABLE_RTTI=ON \
                          -DCMAKE_INSTALL_PREFIX=${PREFIX} \
                          -DCMAKE_BUILD_TYPE=Release \
                          -DLLVM_TARGETS_TO_BUILD=host \
                          $SRC_DIR;
make -j$CPU_COUNT VERBOSE=1
make install

set +ve