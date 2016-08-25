# Build libclang recipe
# conda build conda/libclang -c statiskit
# conda install libclang -c statiskit --use-local

# Build libclanglite recipe
conda build libclanglite -c statiskit
conda install libclanglite -c statiskit --use-local

# Build python-clanglite recipe
conda build python-clanglite -c statiskit -c conda-forge
conda install python-clanglite -c statiskit --use-local
conda remove python-clanglite
pip install -e ..