scons py --prefix=$PREFIX -j$(( $CPU_COUNT > 2 ? $CPU_COUNT - 1 : $CPU_COUNT )) debug=1
$PYTHON setup.py install