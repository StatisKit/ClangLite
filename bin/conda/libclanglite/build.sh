set -ev

scons cpp --prefix=$PREFIX -j$CPU_COUNT
rm -rf $PREFIX/include/clanglite

set +ev