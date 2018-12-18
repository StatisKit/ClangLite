set -ve

mkdir build
cd build

# ${GCC} -x c++ -E -v /dev/null &> config.txt
# export CFLAGS="$(python $RECIPE_DIR/flags.py) ${CFLAGS}"
# TMP_C_LINK_FLAGS=`python $RECIPE_DIR/link_flags.py`

# TMP_C_LINK_FLAGS="${TMP_CXX_LINK_FLAGS} -L${PREFIX}/lib"
# echo ${TMP_C_LINK_FLAGS}

# ${GXX} -x c++ -E -v /dev/null &> config.txt
# export CXXFLAGS="$(python $RECIPE_DIR/flags.py) ${CXXFLAGS}"
# TMP_CXX_LINK_FLAGS=`python $RECIPE_DIR/link_flags.py`

# TMP_CXX_LINK_FLAGS="${TMP_CXX_LINK_FLAGS} -L${PREFIX}/lib"
# echo ${TMP_CXX_LINK_FLAGS}

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
                          ..;
make -j$CPU_COUNT VERBOSE=1
make install

set +ve