pip install scons
if errorlevel 1 exit 1
scons cpp --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT% --toolchain=%TOOLCHAIN%
if errorlevel 1 exit 1
