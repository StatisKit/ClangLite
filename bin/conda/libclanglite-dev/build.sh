set -ev

scons autowig --prefix=$PREFIX -j$CPU_COUNT

set +ev