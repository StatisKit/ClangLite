set -e

anaconda login

cd conda
for i in 'libclang' 'python-clanglite'; do
    conda build ${i%%/} -c StatisKit -c salford_systems -c dan_blanchard;
    CONDA_FILE=`conda build ${i%%/} --output`;
    anaconda upload --force --user StatisKit ${CONDA_FILE%%};
done