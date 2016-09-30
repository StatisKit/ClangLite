set -xe

# Build libclang recipe
conda build conda/libclang -c statiskit -c conda-forge
conda install libclang  --use-local -c statiskit -c conda-forge

# Build libclanglite recipe
conda build conda/libclanglite -c statiskit -c conda-forge
conda install libclanglite --use-local -c statiskit -c conda-forge

# Build python-clanglite recipe -c conda-forge
conda build conda/python-clanglite -c statiskit -c conda-forge
conda install python-clanglite --use-local -c statiskit -c conda-forge
