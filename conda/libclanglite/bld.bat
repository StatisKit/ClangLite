conda create -n py27 python=2
if errorlevel 1 exit 1
source activate py27
if errorlevel 1 exit 1
conda install python-scons -c statiskit
if errorlevel 1 exit 1
scons cpp --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT% --toolchain=%TOOLCHAIN%
if errorlevel 1 exit 1
