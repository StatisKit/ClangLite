pip install enscons
if errorlevel 1 exit 1
python -m SCons cpp --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT% --toolchain=%TOOLCHAIN%
if errorlevel 1 exit 1
