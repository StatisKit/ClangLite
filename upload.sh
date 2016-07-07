anaconda login
cd conda
for i in 'python-clanglite'; do
	conda build ${i%%/} -c StatisKit;
	CONDA_FILE=`conda build ${i%%/} --output`;
    anaconda upload --user StatisKit ${CONDA_FILE%%};
done