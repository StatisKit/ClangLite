set -xe

git clone https://github.com/StatisKit/PyClangLite.git
cd PyClangLite/conda

conda install python-pkgtk -c statiskit -c conda-forge
export TOOLCHAIN=`pkgtk toolchain`

for CONDA_RECIPE in libclang libclanglite python-clanglite; do
  conda build $CONDA_RECIPE -c statiskit
done