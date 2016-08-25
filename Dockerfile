FROM statiskit/ubuntu:trusty

# Build or install
ARG BUILD="false"

# Clone the repository
RUN git clone https://github.com/StatisKit/PyClangLite.git $HOME/PyClangLite

# Build libraries and packages from PyClangLite
RUN [ $BUILD = "true" ] && cd $HOME/PyClangLite/conda && /bin/bash build.sh || [ $BUILD = "false" ] 

# Install libraries and packages from PyClangLite
RUN [ $BUILD = "false" ] && cd $HOME/PyClangLite/conda && /bin/bash install.sh || [ $BUILD = "true" ]

# Create a file for anaconda upload
RUN touch $HOME/upload.sh
RUN echo "set -e" >> $HOME/upload.sh
RUN [ $BUILD = "true" ] && echo "conda install anaconda-client" >> $HOME/upload.sh || [ $BUILD = "false" ]
RUN [ $BUILD = "true" ] && echo "anaconda upload \`conda build PyClangLite/conda/libclang --output\` --user statiskit --force" >> $HOME/upload.sh || [ $BUILD = "false" ]
RUN [ $BUILD = "true" ] && echo "anaconda upload \`conda build PyClangLite/conda/libclanglite --output\` --user statiskit --force" >> $HOME/upload.sh || [ $BUILD = "false" ]
RUN [ $BUILD = "true" ] && echo "anaconda upload \`conda build PyClangLite/conda/python-clanglite --output\` --user statiskit --force" >> $HOME/upload.sh || [ $BUILD = "false" ]
RUN [ $BUILD = "false" ] && echo "rm -rf PyClangLite" >> $HOME/upload.sh || [ $BUILD = "true" ]
RUN [ $BUILD = "true" ] && echo "conda remove anaconda-client" >> $HOME/upload.sh || [ $BUILD = "false" ]
RUN [ $BUILD = "true" ] && echo "conda env remove -n _build" >> $HOME/upload.sh
RUN [ $BUILD = "true" ] && echo "conda env remove -n _test" >> $HOME/upload.sh || [ $BUILD = "true" ]
RUN echo "$HOME/miniconda/bin/conda clean --all" >> $HOME/upload.sh
RUN echo "rm -rf $HOME/miniconda/pkgs" >> $HOME/upload.sh
RUN echo "rm $HOME/upload.sh" >> $HOME/upload.sh
RUN [ $BUILD = "false" ] && cd $HOME && /bin/bash upload.sh || [ $BUILD = "true" ]
