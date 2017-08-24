set -ev

if [[ "$PY3K" = "1" ]]; then
    2to3 -n -w $SRC_DIR/src/py/clanglite
fi

scons py --prefix=$PREFIX -j$CPU_COUNT
python setup.py install --prefix=$PREFIX

set +ev