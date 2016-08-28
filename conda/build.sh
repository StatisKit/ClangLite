# Install dependencies (build, run & tests)
conda install libclang libboost python-scons pyyaml python numpy -c statiskit

# Build PyClangLite recipe
CPU_COUNT=`python -c "import multiprocessing; print(multiprocessing.cpu_count())"`
scons -j$(( $CPU_COUNT > 2 ? $CPU_COUNT - 1 : $CPU_COUNT ))
pip install -e .
