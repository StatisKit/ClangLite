git checkout release_38
cd tools
git clone https://github.com/llvm-mirror/clang.git
cd clang
git checkout release_38
cd ../..
SRC_DIR=`pwd`
cd ..
BLD_DIR=`mkdir "build_llvmclang"`
cd $BLD_DIR
cmake -G "Unix Makefiles" -DBUILD_SHARED_LIBS=ON \
                          -DLLVM_INCLUDE_TESTS=OFF \
                          -DLLVM_INCLUDE_UTILS=OFF \
                          -DLLVM_INCLUDE_DOCS=OFF \
                          -DLLVM_INCLUDE_EXAMPLES=OFF \
                          -DLLVM_ENABLE_TERMINFO=OFF \
                          -DLLVM_ENABLE_RTTI=ON \
                          -DCMAKE_INSTALL_PREFIX=${PREFIX} \
                          -DCMAKE_BUILD_TYPE=Release \
                          $SRC_DIR;
make -j$CPU_COUNT VERBOSE=1
make install
cd ..
rm -fr $BLD_DIR
