git checkout release_38
cd tools
git clone https://github.com/llvm-mirror/clang.git
cd clang
git checkout release_38
cd ../..
set "srcdir=%cd%"
cd ..
mkdir build
cd build
cmake -G "Visual Studio 12" -DBUILD_SHARED_LIBS=1 -DLLVM_ENABLE_RTTI=1 -DCMAKE_INSTALL_PREFIX=${PREFIX} -DCMAKE_BUILD_TYPE=Release %srcdir%
make
make install
