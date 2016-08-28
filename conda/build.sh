# Install dependencies (build, run & tests)
conda install libclang libboost python-scons pyyaml python numpy -c statiskit

# Build PyClangLite recipe
scons py
pip install -e .
