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