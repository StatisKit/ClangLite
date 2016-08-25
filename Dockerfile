FROM statiskit/ubuntu:trusty

# Build or install
ARG BUILD="false"

# Clone the repository
RUN git clone https://github.com/StatisKit/PyClangLite.git $HOME/PyClangLite

# Build libraries and packages from PyClangLite
RUN [ $BUILD = "true" ] && cd $HOME/PyClangLite/conda && /bin/bash build.sh || [ $BUILD = "false" ] 

# Install libraries and packages from PyClangLite
RUN [ $BUILD = "false" ] && cd $HOME/PyClangLite/conda && /bin/bash install.sh || [ $BUILD = "true" ]

# Create a file for anaconda post-link
RUN [ -f $HOME/post-link.sh ] && head -n -1 post-link.sh || touch $HOME/post-link.sh && echo "set -e" >> $HOME/post-link.sh
RUN [ $BUILD = "true" ] && echo "conda install anaconda-client" >> $HOME/post-link.sh || [ $BUILD = "false" ]
RUN [ $BUILD = "true" ] && echo "anaconda post-link \`conda build PyClangLite/conda/libclang --output\` --user statiskit --force" >> $HOME/post-link.sh || [ $BUILD = "false" ]
RUN [ $BUILD = "true" ] && echo "anaconda post-link \`conda build PyClangLite/conda/libclanglite --output\` --user statiskit --force" >> $HOME/post-link.sh || [ $BUILD = "false" ]
RUN [ $BUILD = "true" ] && echo "anaconda post-link \`conda build PyClangLite/conda/python-clanglite --output\` --user statiskit --force" >> $HOME/post-link.sh || [ $BUILD = "false" ]
RUN [ $BUILD = "false" ] && echo "rm -rf PyClangLite" >> $HOME/post-link.sh || [ $BUILD = "true" ]
RUN [ $BUILD = "true" ] && echo "conda remove anaconda-client" >> $HOME/post-link.sh || [ $BUILD = "false" ]
RUN [ $BUILD = "true" ] && echo "conda env remove -n _build" >> $HOME/post-link.sh
RUN [ $BUILD = "true" ] && echo "conda env remove -n _test" >> $HOME/post-link.sh || [ $BUILD = "true" ]
RUN echo "$HOME/miniconda/bin/conda clean --all" >> $HOME/post-link.sh
RUN echo "rm -rf $HOME/miniconda/pkgs" >> $HOME/post-link.sh
RUN echo "rm $HOME/post-link.sh" >> $HOME/post-link.sh
RUN [ $BUILD = "false" ] && cd $HOME && /bin/bash post-link.sh || [ $BUILD = "true" ]
