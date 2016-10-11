conda create -n py27 python=2
activate py27
conda install python-scons -c statiskit
scons cpp --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT% --toolchain=%TOOLCHAIN%