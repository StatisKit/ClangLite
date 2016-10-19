dir "C:\Program Files (x86)\Windows Kits\10\lib\10.0.14393.0"
dir "C:\Program Files (x86)\Windows Kits\10\lib\10.0.14393.0\um"
dir "C:\Program Files (x86)\Windows Kits\10\lib\10.0.14393.0\um\x64"

scons cpp --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT% --toolchain=%TOOLCHAIN%
if errorlevel 1 exit 1

