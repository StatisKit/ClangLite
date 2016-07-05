git checkout release_38
cd tools
git clone https://github.com/llvm-mirror/clang.git
cd clang
git checkout release_38
cd ../..
srcdir=`pwd`
cd ..
mkdir build
cd build
if [[ "$TRAVIS_OS_NAME" == "linux" ]]; then
    cmake -G "Unix Makefiles" -DLLVM_INCLUDE_TESTS=OFF \
                          -DLLVM_INCLUDE_UTILS=OFF \
                          -DLLVM_INCLUDE_DOCS=OFF \
                          -DLLVM_INCLUDE_EXAMPLES=OFF \
                          -DLLVM_ENABLE_TERMINFO=OFF \
                          -DBUILD_SHARED_LIBS=1 \
                          -DLLVM_ENABLE_RTTI=1 \
                          -DCMAKE_INSTALL_PREFIX=${PREFIX} \
                          -DCMAKE_BUILD_TYPE=Release \
                          -DCMAKE_C_COMPILER=${PREFIX}/bin/gcc \
                          -DCMAKE_CXX_COMPILER=${PREFIX}/bin/g++ \
                          -DCMAKE_CXX_LINK_FLAGS="-Wl,-rpath,${PREFIX}/lib -L${PREFIX}/lib" \
                          $srcdir;
elif [[ "$TRAVIS_OS_NAME" == "osx" ]]; then
    cmake -G "Unix Makefiles" -DLLVM_INCLUDE_TESTS=OFF \
                          -DLLVM_INCLUDE_UTILS=OFF \
                          -DLLVM_INCLUDE_DOCS=OFF \
                          -DLLVM_INCLUDE_EXAMPLES=OFF \
                          -DLLVM_ENABLE_TERMINFO=OFF \
                          -DBUILD_SHARED_LIBS=1 \
                          -DLLVM_ENABLE_RTTI=1 \
                          -DCMAKE_INSTALL_PREFIX=${PREFIX} \
                          -DCMAKE_BUILD_TYPE=Release \
                          -DCMAKE_CXX_LINK_FLAGS="-Wl,-rpath,${PREFIX}/lib -L${PREFIX}/lib" \
                          $srcdir;
fi
make -j6
make install
