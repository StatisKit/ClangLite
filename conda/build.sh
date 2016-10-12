set -e
set +x

[[ -z $BUILD_TARGETS ]] && BUILD_TARGETS="libllvm libclang libclanglite python-clanglite" || echo "Targets to build: "$BUILD_TARGETS

set -x

git clone https://github.com/StatisKit/PyClangLite.git
cd PyClangLite/conda

git clone https://gist.github.com/c491cb08d570beeba2c417826a50a9c3.git toolchain
cd toolchain
source config.sh
cd ..
rm -rf toolchain

for BUILD_TARGET in $BUILD_TARGETS; do
  conda build $BUILD_TARGET -c statiskit -c conda-forge
done

rm -rf PyClangLite
