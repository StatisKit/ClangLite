git checkout release_37
cd tools
git clone https://github.com/llvm-mirror/clang.git
if errorlevel 1 exit 1
cd clang
git checkout release_37
cd ..
cd ..
set "srcdir=%cd%"
cd ..
mkdir build
cd build
cmake -G "Visual Studio 9 2008" ^
      -DCMAKE_PREFIX_PATH=%LIBRARY_PREFIX% ^
      -DLLVM_INCLUDE_TESTS=OFF ^
      -DLLVM_INCLUDE_UTILS=OFF ^
      -DLLVM_INCLUDE_DOCS=OFF ^
      -DLLVM_INCLUDE_EXAMPLES=OFF ^
      -DBUILD_SHARED_LIBS=1 ^
      -DLLVM_ENABLE_RTTI=1 ^
      -DCMAKE_INSTALL_PREFIX:PATH=%LIBRARY_PREFIX% ^
      -DCMAKE_BUILD_TYPE=Release ^
      -DCMAKE_CXX_LINK_FLAGS="-Wl,-rpath,%PREFIX%/lib -L%PREFIX%/lib" ^
      %srcdir%
if errorlevel 1 exit 1
REM ninja lld
REM if errorlevel 1 exit 1
msbuild LLVM.sln /target:"lld executables\lld"
if errorlevel 1 exit 1
REM cmake --build . --config Release
REM cmake --build . --target install --config Release
