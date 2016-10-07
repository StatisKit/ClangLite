set +x

[[ -z $ANACONDA_USERNAME ]] && read -p "Username: " ANACONDA_USERNAME || echo "Username: "$ANACONDA_USERNAME
[[ -z $ANACONDA_PASSWORD ]] && read -s -p %ANACONDA_USERNAME"'s password: " ANACONDA_PASSWORD ||echo %ANACONDA_USERNAME"'s password: [secure]"

conda install -n root anaconda-client;
yes | anaconda login --username "$ANACONDA_USERNAME" --password "$ANACONDA_PASSWORD"

set -x

for CONDA_RECIPE in libllvm libclang libclanglite python-clanglite; do
  CONDA_FILE=`conda build $CONDA_RECIPE --output`
  anaconda upload --user statiskit ${CONDA_FILE%%} || echo "upload failed"
done

anaconda logout