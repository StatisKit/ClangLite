echo $LD_LIBRARY_PATH
echo $LIBRARY_PATH
git checkout release_38
cd tools
git clone https://github.com/llvm-mirror/clang.git
cd clang
git checkout release_38
cd ../..
SRC_DIR=`pwd`
cd ..
BLD_DIR=`mktemp -d -p . -t temp.XXXXXXXX`
cd $BLD_DIR
cmake -G "Unix Makefiles" -DLLVM_INCLUDE_TESTS=OFF \
                          -DLLVM_INCLUDE_UTILS=OFF \
                          -DLLVM_INCLUDE_DOCS=OFF \
                          -DLLVM_INCLUDE_EXAMPLES=OFF \
                          -DLLVM_ENABLE_TERMINFO=OFF \
                          -DLLVM_ENABLE_RTTI=1 \
                          -DCMAKE_INSTALL_PREFIX=${PREFIX} \
                          -DCMAKE_BUILD_TYPE=Release \
                          -DCMAKE_CXX_LINK_FLAGS="-Wl,-rpath,${PREFIX}/lib -L${PREFIX}/lib" \
                          $SRC_DIR;
make -j$CPU_COUNT VERBOSE=1
make install
cd ..
rm -fr $BLD_DIR
