# Build libclang recipe
# conda build conda/libclang -c statiskit
# conda install libclang -c statiskit --use-local

# Build libclanglite recipe
conda build conda/libclanglite -c statiskit
conda install libclanglite --use-local -c statiskit

# Build python-clanglite recipe
conda build conda/python-clanglite -c statiskit
conda install python-clanglite --use-local -c statiskit
conda remove python-clanglite
conda install python-scons -c statiskit
scons py
pip install -e .
