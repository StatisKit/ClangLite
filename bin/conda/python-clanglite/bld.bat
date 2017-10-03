echo ON

if "%PY3K%"=="1" 2to3 -n -w %SRC_DIR%\src\py\clanglite
if errorlevel 1 exit 1

scons py --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT%
if errorlevel 1 exit 1
python setup.py install --prefix=%PREFIX%
if errorlevel 1 exit 1

echo OFF