git checkout release_38
cd tools
git clone https://github.com/llvm-mirror/clang.git
if errorlevel 1 exit 1
cd clang
git checkout release_38
cd ..
cd ..
set "srcdir=%cd%"
cd ..
mkdir build
cd build
cmake -G "Visual Studio 12 2013" ^
      -DCMAKE_PREFIX_PATH=%LIBRARY_PREFIX% ^
      -DLLVM_INCLUDE_TESTS=OFF ^
      -DLLVM_INCLUDE_UTILS=OFF ^
      -DLLVM_INCLUDE_DOCS=OFF ^
      -DLLVM_INCLUDE_EXAMPLES=OFF ^
      -DBUILD_SHARED_LIBS=1 ^
      -DLLVM_ENABLE_RTTI=1 ^
      -DCMAKE_INSTALL_PREFIX:PATH=%LIBRARY_PREFIX% ^
      -DCMAKE_BUILD_TYPE=Release ^
      -DCMAKE_CXX_LINK_FLAGS="-Wl,-rpath,%LIBRARY_PREFIX%/lib -L%LIBRARY_PREFIX%/lib" ^
      %srcdir%
if errorlevel 1 exit 1
cmake --build . --config Release
dir
cd Release
dir
cd lib
dir
cd %LIBRARY_PREFIX%
dir
if errorlevel 1 exit 1
cmake --build . --target install --config Release
if errorlevel 1 exit 1
