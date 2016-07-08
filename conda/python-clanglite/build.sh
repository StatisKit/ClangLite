which llvm-config
g++ --version
CC=${PREFIX}/bin/gcc CXX=${PREFIX}/bin/g++ scons python --prefix=$PREFIX -j$CPU_COUNT
$PYTHON setup.py install
