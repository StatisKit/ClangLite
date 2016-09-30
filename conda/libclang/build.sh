cd tools
curl -O http://llvm.org/releases/3.8.0/cfe-3.8.1.src.tar.xz
tar --xz -xvf cfe-3.8.1.src.tar.xz -C cfe-3.8.1
mv cfe-3.8.1/cfe-3.8.1.src clang
rm cfe-3.8.1.src.tar.xz
rm -rf cfe-3.8.1
cd ..
PWD_DIR=`pwd`
cd ..
BLD_DIR=`mkdir "build_llvmclang"`
cd $BLD_DIR
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
                          $PWD_DIR;
make -j$CPU_COUNT VERBOSE=1
make install
cd ..
rm -fr $BLD_DIR
# git fetch origin
# git checkout -b release_38 origin/release_38
# cd tools
# git clone https://github.com/llvm-mirror/clang.git
# cd clang
# git fetch origin
# git checkout -b release_38 origin/release_38
# cd ../..
# SRC_DIR=`pwd`
# cd ..
# BLD_DIR=`mkdir "build_llvmclang"`
# cd $BLD_DIR
# cmake -G "Unix Makefiles" -DBUILD_SHARED_LIBS=ON \
#                           -DLLVM_INCLUDE_TESTS=OFF \
#                           -DLLVM_INCLUDE_UTILS=OFF \
#                           -DLLVM_INCLUDE_DOCS=OFF \
#                           -DLLVM_INCLUDE_EXAMPLES=OFF \
#                           -DLLVM_ENABLE_TERMINFO=OFF \
#                           -DLLVM_ENABLE_RTTI=ON \
#                           -DCMAKE_INSTALL_PREFIX=${PREFIX} \
#                           -DCMAKE_BUILD_TYPE=Release \
#                           $SRC_DIR;
# make -j$CPU_COUNT VERBOSE=1
# make install
# cd ..
# rm -fr $BLD_DIR
