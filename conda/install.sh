set -xe

conda install libllvm --use-local -c statiskit
conda install libclang --use-local -c statiskit
conda install libclanglite --use-local -c statiskit
conda install python-clanglite --use-local -c statiskit