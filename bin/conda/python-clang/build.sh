set -ve

cp -rf bindings/python/clang $SP_DIR

echo "try:" >> $SP_DIR/clang/cindex.py
echo "    from path import Path" >> $SP_DIR/clang/cindex.py
echo "except:" >> $SP_DIR/clang/cindex.py
echo "    from path import path as Path" >> $SP_DIR/clang/cindex.py
echo "library_path = Path(__file__)" >> $SP_DIR/clang/cindex.py
echo "while not (library_path/'lib').exists():" >> $SP_DIR/clang/cindex.py
echo "    library_path = library_path.parent" >> $SP_DIR/clang/cindex.py
echo "conf.set_library_path((library_path/'lib').abspath())" >> $SP_DIR/clang/cindex.py

if [[ "$PY3K" = "1" ]]; then
    2to3 -n -w $SP_DIR/clang/cindex.py
fi

set +ve