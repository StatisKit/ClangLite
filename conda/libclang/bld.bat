git checkout release_38
cd tools
git clone https://github.com/llvm-mirror/clang.git
cd clang
git checkout release_38
cd ..
cd ..
dir
set "srcdir=%cd%"
cd ..
mkdir build
cd build
dir
cmake  %srcdir%
      -G "Visual Studio 9 2008"
      -DBUILD_SHARED_LIBS=1
      -DLLVM_ENABLE_RTTI=1
      -DCMAKE_INSTALL_PREFIX=%PREFIX%
      -DCMAKE_BUILD_TYPE=Release
      -DCMAKE_C_COMPILER=%PREFIX%/bin/gcc
      -DCMAKE_CXX_COMPILER=%PREFIX%/bin/g++
      -DCMAKE_CXX_LINK_FLAGS="-Wl,-rpath,%PREFIX%/lib -L%PREFIX%/lib"
make
make install
