set -ev

scons cpp --prefix=$PREFIX -j$CPU_COUNT

set +ev