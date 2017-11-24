set -ev

scons cpp-dev --prefix=$PREFIX -j$CPU_COUNT

set +ev