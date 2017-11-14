echo ON

xcopy "%PREFIX%\Library\bin" "%PREFIX%\Library\bin.back" /e /i /h /q
if errorlevel 1 exit 1

mkdir build_llvm
if errorlevel 1 exit 1
cd build_llvm
if errorlevel 1 exit 1

set BUILD_CONFIG=Release

if "%ARCH%"=="32" (
     set CMAKE_GENERATOR=Visual Studio 12 2013
) else (
     set CMAKE_GENERATOR=Visual Studio 12 2013 Win64
)
set CMAKE_GENERATOR_TOOLSET=v120_xp

set CMAKE_CUSTOM=-DLLVM_TARGETS_TO_BUILD=host ^
                 -DLLVM_INCLUDE_TESTS=OFF ^
                 -DLLVM_INCLUDE_UTILS=OFF ^
                 -DLLVM_INCLUDE_DOCS=OFF ^
                 -DLLVM_ENABLE_RTTI=ON ^
                 -DLLVM_INCLUDE_EXAMPLES=OFF

cmake -G "%CMAKE_GENERATOR%" -T "%CMAKE_GENERATOR_TOOLSET%" -DCMAKE_BUILD_TYPE="%BUILD_CONFIG%" -DCMAKE_PREFIX_PATH=%LIBRARY_PREFIX% -DCMAKE_INSTALL_PREFIX:PATH=%LIBRARY_PREFIX% %CMAKE_CUSTOM% %SRC_DIR%
if errorlevel 1 exit 1
cmake --build . --config "%BUILD_CONFIG%"
if errorlevel 1 exit 1
cmake --build . --config "%BUILD_CONFIG%" --target install
if errorlevel 1 exit 1

rmdir "%PREFIX%\Library\bin" /s /q
if errorlevel 1 exit 1
move "%PREFIX%\Library\bin.back" "%PREFIX%\Library\bin" /y
if errorlevel 1 exit 1
rmdir "%PREFIX%\Library\include\llvm" /s /q
if errorlevel 1 exit 1
rmdir "%PREFIX%\Library\include\llvm-c" /s /q
if errorlevel 1 exit 1

echo OFF