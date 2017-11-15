echo ON

scons cpp --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT%
if errorlevel 1 exit 1

echo OFF
