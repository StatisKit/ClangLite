#if [ "$(uname)" == "Linux" ]; then
#    sudo apt-get install cmake zlib1g-dev scons 
#fi

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
cmake -G "Unix Makefiles" -DBUILD_SHARED_LIBS=1 -DLLVM_ENABLE_RTTI=1 -DCMAKE_INSTALL_PREFIX=${PREFIX} -DCMAKE_BUILD_TYPE=Release $srcdir
make
make install
