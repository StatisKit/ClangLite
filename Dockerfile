FROM statiskit/ubuntu:trusty

# Test if build or not
ARG BUILD="true"

# Install libraries and packages from PyClangLite
# Clone the repository
RUN [ $BUILD = "true" ] && git clone https://github.com/StatisKit/PyClangLite.git $HOME/PyClangLite || [ $BUILD = "false" ]
RUN [ $BUILD = "true" ] && git -C $HOME/PyClangLite pull || [ $BUILD = "false" ]

## Create a file for anaconda upload
RUN touch $HOME/upload.sh
RUN echo "set -e" >> $HOME/upload.sh
RUN [ $BUILD = "true" ] && echo "$HOME/miniconda/bin/conda install anaconda-client" >> $HOME/upload.sh || [ $BUILD = "false" ]

## Build libclang recipe
# RUN [ $BUILD = "true" ] && $HOME/miniconda/bin/conda build $HOME/PyClangLite/conda/libclang -c statiskit ||[ $BUILD = "false" ]
# RUN [ $BUILD = "true" ] && echo "$HOME/miniconda/bin/anaconda upload \`$HOME/miniconda/bin/conda build $HOME/PyClangLite/conda/libclang --output\` --user statiskit --force" >> $HOME/upload.sh || [ $BUILD = "false" ]
# RUN $HOME/miniconda/bin/conda install libclang -c statiskit --use-local

## Build libclanglite recipe
RUN [ $BUILD = "true" ] && $HOME/miniconda/bin/conda build $HOME/PyClangLite/conda/libclanglite -c statiskit || [ $BUILD = "false" ]
RUN [ $BUILD = "true" ] && echo "$HOME/miniconda/bin/anaconda upload \`$HOME/miniconda/bin/conda build $HOME/PyClangLite/conda/libclanglite --output\` --user statiskit --force" >> $HOME/upload.sh || [ $BUILD = "false" ]
RUN $HOME/miniconda/bin/conda install libclanglite -c statiskit --use-local

## Build python-clanglite recipe
# RUN [ $BUILD = "true" ] && $HOME/miniconda/bin/conda build $HOME/PyClangLite/conda/python-clanglite -c statiskit -c conda-forge || [ $BUILD = "false" ]
# RUN [ $BUILD = "true" ] && echo "$HOME/miniconda/bin/anaconda upload \`$HOME/miniconda/bin/conda build $HOME/PyClangLite/conda/python-clanglite --output\` --user statiskit --force" >> $HOME/upload.sh || [ $BUILD = "false" ]
# RUN $HOME/miniconda/bin/conda install python-clanglite -c statiskit --use-local
# RUN [ $BUILD = "true" ] && $HOME/miniconda/bin/conda remove python-clanglite || [ $BUILD = "false" ]
# RUN [ $BUILD = "true" ] && $HOME/miniconda/bin/pip install -e $HOME/PyClangLite  || [ $BUILD = "false" ]

## Finalize file for anaconda upload
RUN [ $BUILD = "false" ] && echo "rm -rf $HOME/PyClangLite" >> $HOME/upload.sh || [ $BUILD = "true" ]
RUN [ $BUILD = "true" ] && echo "$HOME/miniconda/bin/conda remove anaconda-client" >> $HOME/upload.sh || [ $BUILD = "false" ]
RUN echo "$HOME/miniconda/bin/conda env remove -n _build" >> $HOME/upload.sh
RUN [ $BUILD = "true" ] && echo "conda env remove -n _test" >> $HOME/upload.sh || [ $BUILD = "true" ]
RUN echo "$HOME/miniconda/bin/conda clean --all" >> $HOME/upload.sh
RUN echo "rm -rf $HOME/miniconda/pkgs" >> $HOME/upload.sh
RUN echo "rm $HOME/upload.sh" >> $HOME/upload.sh
RUN [ $BUILD = "false" ] && /bin/bash $HOME/upload.sh || [ $BUILD = "true" ]
