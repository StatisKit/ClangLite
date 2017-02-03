set -ev

scons py --prefix=$PREFIX -j$CPU_COUNT
python setup.py install

set +ev