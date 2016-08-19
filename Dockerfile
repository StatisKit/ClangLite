FROM statiskit/ubuntu:trusty

# Clone the repository
RUN git clone https://github.com/StatisKit/PyClangLite.git $HOME/PyClangLite
RUN git -C $HOME/PyClangLite pull

# Build recipes
RUN $HOME/miniconda/bin/conda build $HOME/PyClangLite/conda/libclang -c statiskit
RUN $HOME/miniconda/bin/conda build $HOME/PyClangLite/conda/libclanglite -c statiskit
RUN $HOME/miniconda/bin/conda build $HOME/PyClangLite/conda/python-clanglite -c statiskit

# Create a file for anaconda upload
RUN touch $HOME/upload.sh
RUN echo "$HOME/miniconda/bin/anaconda upload \`conda build $HOME/PyClangLite/conda/libclang --output\` --user statiskit --force" >> $HOME/upload.sh
RUN echo "$HOME/miniconda/bin/anaconda upload \`conda build $HOME/PyClangLite/conda/libclanglite --output\` --user statiskit --force" >> $HOME/upload.sh
RUN echo "$HOME/miniconda/bin/anaconda upload \`conda build $HOME/PyClangLite/conda/python-clanglite --output\` --user statiskit --force" >> $HOME/upload.sh

# Install packages
RUN $HOME/miniconda/bin/conda install libclang -c statiskit --use-local
RUN $HOME/miniconda/bin/conda install libclanglite -c statiskit --use-local
RUN $HOME/miniconda/bin/conda install python-clanglite -c statiskit --use-local