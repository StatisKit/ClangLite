# Install dependencies (build, run & tests)
conda install libclang libboost python-scons pyyaml python numpy -c statiskit

# Build libclanglite recipe
scons cpp

# Build python-clanglite recipe
scons py
pip install -e .
