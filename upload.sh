set -e

anaconda login

cd conda
for i in 'libclang' 'python-clanglite'; do
    conda build ${i%%/} -c statiskit;
    CONDA_FILE=`conda build ${i%%/} --output`;
    anaconda upload --force --user statiskit ${CONDA_FILE%%};
done