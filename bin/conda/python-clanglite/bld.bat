echo ON

if "%PY3K%"=="1" 2to3 -n -w %SRC_DIR%\src\py\clanglite
if errorlevel 1 exit 1


scons py --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT%
echo "SCONS DONE"
if errorlevel 1 exit 1
move %SP_DIR%\clanglite\__clanglite.pyd %SRC_DIR%\src\py\clanglite\__clanglite.pyd /Y
echo "MOVE DONE"
if errorlevel 1 exit 1
%PYTHON% setup.py install --prefix=%PREFIX%
echo "SETUP DONE"
if errorlevel 1 exit 1
echo OFF
