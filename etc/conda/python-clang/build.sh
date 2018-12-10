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

mkdir build_clang
cd build_clang
if [ -n "$MACOSX_DEPLOYMENT_TARGET" ]; then
    # OSX needs 10.7 or above with libc++ enabled
    export MACOSX_DEPLOYMENT_TARGET=10.9
fi

cmake -G "Unix Makefiles" -DBUILD_SHARED_LIBS=ON \
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

cp -rf bindings/python/clang $SP_DIR

echo "try:" >> $SP_DIR/clang/cindex.py
echo "    from path import Path" >> $SP_DIR/clang/cindex.py
echo "except:" >> $SP_DIR/clang/cindex.py
echo "    from path import path as Path" >> $SP_DIR/clang/cindex.py
echo "library_path = Path(__file__)" >> $SP_DIR/clang/cindex.py
echo "while not (library_path/'lib').exists():" >> $SP_DIR/clang/cindex.py
echo "    library_path = library_path.parent" >> $SP_DIR/clang/cindex.py
echo "conf.set_library_path((library_path/'lib').abspath())" >> $SP_DIR/clang/cindex.py

if [[ "$PY3K" = "1" ]]; then
    2to3 -n -w $SP_DIR/clang/cindex.py
fi

set +ve