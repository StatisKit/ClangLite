git checkout release_38
cd tools
git clone https://github.com/llvm-mirror/clang.git
cd clang
git checkout release_38
cd ..
cd ..
set "srcdir=%cd%"
cd ..
mkdir build
cd build
cmake -G "Visual Studio 12" ^
      -DCMAKE_PREFIX_PATH=%LIBRARY_PREFIX% ^
      -DLLVM_INCLUDE_TESTS=OFF ^
      -DLLVM_INCLUDE_UTILS=OFF ^
      -DLLVM_INCLUDE_DOCS=OFF ^
      -DLLVM_INCLUDE_EXAMPLES=OFF ^
      -DBUILD_SHARED_LIBS=1 ^
      -DLLVM_ENABLE_RTTI=1 ^
      -DCMAKE_INSTALL_PREFIX=%LIBRARY_PREFIX% ^
      -DCMAKE_BUILD_TYPE=Release ^
      -DCMAKE_CXX_LINK_FLAGS="-Wl,-rpath,%PREFIX%/lib -L%PREFIX%/lib" ^
      %srcdir%
cmake --build . --config Release
cmake --build . --target install --config Release
