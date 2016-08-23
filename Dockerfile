FROM statiskit/ubuntu:trusty

# Test if build or not
ARG BUILD="true"

# Install libraries and packages from PyClangLite
# Clone the repository
RUN [ $BUILD = "true" ] && git clone https://github.com/StatisKit/PyClangLite.git $HOME/PyClangLite
RUN [ $BUILD = "true" ] && git -C $HOME/PyClangLite pull

## Create a file for anaconda upload
RUN touch $HOME/upload.sh
RUN echo "set -e" >> $HOME/upload.sh
RUN [ $BUILD = "true" ] && echo "conda install anaconda-client" >> $HOME/upload.sh

## Build libclang recipe
# RUN [ $BUILD = "true" ] && $HOME/miniconda/bin/conda build $HOME/PyClangLite/conda/libclang -c statiskit
# RUN [ $BUILD = "true" ] && echo "$HOME/miniconda/bin/anaconda upload \`conda build $HOME/PyClangLite/conda/libclang --output\` --user statiskit --force" >> $HOME/upload.sh
# RUN $HOME/miniconda/bin/conda install libclang -c statiskit --use-local

## Build libclanglite recipe
# RUN [ $BUILD = "true" ] && $HOME/miniconda/bin/conda build $HOME/PyClangLite/conda/libclanglite -c statiskit
# RUN [ $BUILD = "true" ] && echo "$HOME/miniconda/bin/anaconda upload \`conda build $HOME/PyClangLite/conda/libclanglite --output\` --user statiskit --force" >> $HOME/upload.sh
# RUN $HOME/miniconda/bin/conda install libclanglite -c statiskit --use-local

## Build python-clanglite recipe
RUN [ $BUILD = "true" ] && $HOME/miniconda/bin/conda build $HOME/PyClangLite/conda/python-clanglite -c statiskit -c conda-forge
RUN [ $BUILD = "true" ] && echo "$HOME/miniconda/bin/anaconda upload \`conda build $HOME/PyClangLite/conda/python-clanglite --output\` --user statiskit --force" >> $HOME/upload.sh
RUN $HOME/miniconda/bin/conda install python-clanglite -c statiskit --use-local

## Finalize file for anaconda upload
RUN [ $BUILD = "true" ] && echo "rm -rf $HOME/PyClangLite" >> $HOME/upload.sh
RUN [ $BUILD = "true" ] && echo "conda remove anaconda-client" >> $HOME/upload.sh
RUN echo "conda env remove -n _build" >> $HOME/upload.sh
RUN [ $BUILD = "true" ] && echo "conda env remove -n _test" >> $HOME/upload.sh
RUN echo "conda clean --all" >> $HOME/upload.sh
RUN echo "rm -rf $HOME/miniconda/pkgs" >> $HOME/upload.sh
RUN echo "rm $HOME/upload.sh" >> $HOME/upload.sh
RUN [ $BUILD = "false" ] && /bin/bash $HOME/upload.sh
