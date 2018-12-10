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

mkdir %SP_DIR%\clang
if errorlevel 1 exit 1
xcopy bindings\python\clang %SP_DIR%\clang /sy
if errorlevel 1 exit 1
echo "try:" >> %SP_DIR%\clang\cindex.py
echo "    from path import Path" >> %SP_DIR%\clang\cindex.py
echo "except:" >> %SP_DIR%\clang\cindex.py
echo "    from path import path as Path" >> %SP_DIR%\clang\cindex.py
if errorlevel 1 exit 1
echo "library_path = Path(__file__)" >> %SP_DIR%\clang\cindex.py
if errorlevel 1 exit 1
echo "while not (library_path/'Library').exists()\:" >> %SP_DIR%\clang\cindex.py
if errorlevel 1 exit 1
echo "    library_path = library_path.parent" >> %SP_DIR%\clang\cindex.py
if errorlevel 1 exit 1
echo "library_path = library_path/'Library'" >> %SP_DIR%\clang\cindex.py
if errorlevel 1 exit 1
echo "conf.set_library_path((library_path/'lib').abspath())" >> %SP_DIR%\clang\cindex.py
if errorlevel 1 exit 1

echo OFF