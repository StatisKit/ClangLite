#if [ "$(uname)" == "Linux" ]; then
#    sudo apt-get install cmake zlib1g-dev scons 
#fi
ls ${PREFIX}
ls ${PREFIX}/lib | grep libstdc++
strings ${PREFIX}/lib/libstdc++.so.6 | grep GLIBCXX
CC=${PREFIX}/bin/gcc
CXX=${PREFIX}/bin/g++
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
cmake -G "Unix Makefiles" -DBUILD_SHARED_LIBS=1 \
                          -DLLVM_ENABLE_RTTI=1 \
                          -DCMAKE_INSTALL_PREFIX=${PREFIX} \
                          -DCMAKE_BUILD_TYPE=Release \
                          -DCMAKE_C_COMPILER=${PREFIX}/bin/gcc \
                          -DCMAKE_CXX_COMPILER=${PREFIX}/bin/g++ \
                          -DCMAKE_CXX_LINK_FLAGS="-Wl,-rpath,${PREFIX}/lib -L${PREFIX}/lib"
                          $srcdir
make
make install
