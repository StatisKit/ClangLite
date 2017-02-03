echo ON

scons cpp --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT% --arch=%ARCH% --msvc-version=12.0
if errorlevel 1 exit 1

echo OFF
