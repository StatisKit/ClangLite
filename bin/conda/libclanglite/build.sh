set -ev

scons cpp --prefix=$PREFIX -j$CPU_COUNT --debug=stacktrace

set +ev