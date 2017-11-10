# cd tools

# wget http://llvm.org/releases/3.8.1/cfe-3.8.1.src.tar.xz
# tar -xJf cfe-3.8.1.src.tar.xz
# mv cfe-3.8.1.src clang
# cd ..

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

# rm $PREFIX/bin/*

                          # -DCMAKE_INSTALL_PREFIX=${PREFIX} \
                          # -DCMAKE_C_COMPILER=${PREFIX}/bin/gcc \
                          # -DCMAKE_CXX_COMPILER=${PREFIX}/bin/g++ \
                          # -DGCC_INSTALL_PREFIX=${PREFIX} \
                          # -DCMAKE_CXX_LINK_FLAGS="-L${PREFIX}/lib64 -Wl,-rpath,${PREFIX}/lib64" \
