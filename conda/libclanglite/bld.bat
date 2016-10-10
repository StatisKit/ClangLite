dir %LIBRARY_PREFIX%\lib
dir %PREFIX%\lib
dir %PREFIX%
scons cpp --prefix=%PREFIX% -j%CPU_COUNT% --toolchain=%TOOLCHAIN%
