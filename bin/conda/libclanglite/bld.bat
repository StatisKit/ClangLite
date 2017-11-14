echo ON

scons cpp --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT%
if errorlevel 1 exit 1
rmdir %PREFIX%\include\clanglite /s /q
if errorlevel 1 exit 1

echo OFF
