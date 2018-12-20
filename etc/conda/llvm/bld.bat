:: Copyright [2017-2018] UMR MISTEA INRA, UMR LEPSE INRA,                ::
::                       UMR AGAP CIRAD, EPI Virtual Plants Inria        ::
:: Copyright [2015-2016] UMR AGAP CIRAD, EPI Virtual Plants Inria        ::
::                                                                       ::
:: This file is part of the AutoWIG project. More information can be     ::
:: found at                                                              ::
::                                                                       ::
::     http://autowig.rtfd.io                                            ::
::                                                                       ::
:: The Apache Software Foundation (ASF) licenses this file to you under  ::
:: the Apache License, Version 2.0 (the "License"); you may not use this ::
:: file except in compliance with the License. You should have received  ::
:: a copy of the Apache License, Version 2.0 along with this file; see   ::
:: the file LICENSE. If not, you may obtain a copy of the License at     ::
::                                                                       ::
::     http://www.apache.org/licenses/LICENSE-2.0                        ::
::                                                                       ::
:: Unless required by applicable law or agreed to in writing, software   ::
:: distributed under the License is distributed on an "AS IS" BASIS,     ::
:: WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or       ::
:: mplied. See the License for the specific language governing           ::
:: permissions and limitations under the License.                        ::

echo ON

rmdir tools/clang/bindings /s /Q
if errorlevel 1 exit 1

mkdir build
if errorlevel 1 exit 1
cd build
if errorlevel 1 exit 1

set BUILD_CONFIG=Release

if "%ARCH%"=="32" (
     set CMAKE_GENERATOR=Visual Studio 14 2015
) else (
     set CMAKE_GENERATOR=Visual Studio 14 2015 Win64
)
set CMAKE_GENERATOR_TOOLSET=v140_xp

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

echo OFF
