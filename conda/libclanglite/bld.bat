dir %LIBRARY_PREFIX%\lib
dir %PREFIX%\lib
dir %PREFIX%
scons cpp --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT% --toolchain=%TOOLCHAIN%
