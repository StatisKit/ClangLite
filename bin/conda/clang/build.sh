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