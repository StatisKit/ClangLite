set +x

[[ -z $ANACONDA_USERNAME ]] && read -p "Username: " ANACONDA_USERNAME || echo "Username: "$ANACONDA_USERNAME
[[ -z $ANACONDA_PASSWORD ]] && read -s -p %ANACONDA_USERNAME"'s password: " ANACONDA_PASSWORD ||echo %ANACONDA_USERNAME"'s password: [secure]"

conda install -n root anaconda-client;
yes | anaconda login --username "$ANACONDA_USERNAME" --password "$ANACONDA_PASSWORD"

set -x

git clone https://gist.github.com/c491cb08d570beeba2c417826a50a9c3.git toolchain
cd toolchain
eval config.sh
cd ..
rm -rf toolchain

for CONDA_RECIPE in libllvm libclang libclanglite python-clanglite; do
  CONDA_FILE=`conda build $CONDA_RECIPE --output`
  anaconda upload --user statiskit ${CONDA_FILE%%} || echo "upload failed"
done

anaconda logout
