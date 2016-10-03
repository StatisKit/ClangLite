git checkout release_38
cd tools
git clone https://github.com/llvm-mirror/clang.git
if errorlevel 1 exit 1
cd clang
git checkout release_38
cd ../..
set "srcdir=%cd%"
cd ..
mkdir temp
cd temp
cmake -G "Visual Studio 12" -DBUILD_SHARED_LIBS=ON ^
                           -DLLVM_INCLUDE_TESTS=OFF ^
                           -DLLVM_INCLUDE_UTILS=OFF ^
                           -DLLVM_INCLUDE_DOCS=OFF ^
                           -DLLVM_INCLUDE_EXAMPLES=OFF ^
                           -DLLVM_ENABLE_RTTI=ON ^
                           -DCMAKE_INSTALL_PREFIX:PATH=%LIBRARY_PREFIX% ^
                           -DCMAKE_BUILD_TYPE=Release ^
                           %srcdir%
if errorlevel 1 exit 1
mingw32-make -j%CPU_COUNT%
mingw32-make install
cd ..
