set -xe

git clone https://github.com/StatisKit/PyClangLite.git
cd PyClangLite/conda

git clone https://gist.github.com/c491cb08d570beeba2c417826a50a9c3.git toolchain
cd toolchain
eval config.sh
cd ..
rm -rf toolchain

for CONDA_RECIPE in libclang libclanglite python-clanglite; do
  conda build $CONDA_RECIPE -c statiskit
done
