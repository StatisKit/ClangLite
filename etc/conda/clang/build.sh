set -ve

declare -a CMAKE_PLATFORM_FLAGS
if [[ ${HOST} =~ .*darwin.* ]]
then
    CMAKE_PLATFORM_FLAGS+=(-DCMAKE_OSX_SYSROOT="${CONDA_BUILD_SYSROOT}")
elif [[ ${HOST} =~ .*linux.* ]]
then
    CMAKE_PLATFORM_FLAGS+=(-DCMAKE_TOOLCHAIN_FILE="${RECIPE_DIR}/cross-linux.cmake")
fi

rm -rf tools/libclang
rm -rf tools/c-arcmt-test
rm -rf tools/c-index-test

mkdir build
cd build

export LDFLAGS=${LDFLAGS}" -L${PREFIX}/lib"
export CFLAGS=${CFLAGS}" -I${PREFIX}/include"
export CXXFLAGS=${CXXFLAGS}" -I${PREFIX}/include"

cmake -G "Unix Makefiles" -DCMAKE_C_COMPILER=${CC} \
                          -DCMAKE_CXX_COMPILER=${CXX} \
                          -DCMAKE_LINKER=${LD} \
                          -DLLVM_USE_LINKER=${LD} \
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
                          ${CMAKE_PLATFORM_FLAGS[@]} \
                          ..;

make -j$CPU_COUNT VERBOSE=1

make install

set +ve