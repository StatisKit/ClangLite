# PyClangLite

This Python Interface to Clang provides a relatively small API that exposes facilities for parsing source code into an abstract syntax tree (AST), loading already-parsed ASTs, traversing the AST, associating physical source locations with elements within the AST, and other facilities that support Clang-based development tools. The intent is to propose an API that is relatively unstable (contrarily to libclang) for each release of Clang, providing only the basic functionality needed to support development tools. 

## Documentation

Official documentation is available at [virtualplants.github.io](http://virtualplants.github.io)

## Install

To install VPlants.AutoWIG, you need to install these dependencies:
  - LLVM (https://github.com/llvm-mirror/llvm.git),
  - Clang (https://github.com/llvm-mirror/clang.git),
  - Zlib (http://www.zlib.net/),
  - Boost.Python (https://github.com/boostorg/python),
  - SCons (https://github.com/azatoth/scons)
  - OpenAlea.Deploy (https://github.com/openalea/deploy)
  - OpenAlea.SConsX (https://github.com/openalea/sconsx)
  
In particular to install LLVM and Clang, you need to follow instructions on the *Getting Started page of LLVM* (http://llvm.org/docs/GettingStarted.html) to install both LLVM and Clang .
Nevertheless, note that PyClangLite needs LLVM/Clang installed as shared libraries and runtime type information.
As a consequence, on a Ubuntu distribution, you should type

```
git clone https://github.com/llvm-mirror/llvm.git
cd llvm
git reset --hard ccdf189
cd ..
git clone https://github.com/llvm-mirror/clang.git
cd clang
git reset --hard 334563d
cd ..
cd llvm/tools
ln -s ../../clang
cd ../..
mkdir build
cd build
sudo apt-get install cmake
cmake -G "Unix Makefiles" -DBUILD_SHARED_LIBS=1 -DLLVM_ENABLE_RTTI=1 ../llvm
make
sudo make install
cd ..
rm -rf build llvm clang
sudo apt-get install libboost-python-dev zlib1g-dev scons
git clone https://github.com/openalea/deploy.git
cd deploy
sudo python setup.py install
cd ..
sudo rm -rf deploy
git clone https://github.com/openalea/sconsx.git
cd sconsx
sudo python setup.py install
cd ..
sudo rm -rf sconsx
git clone https://github.com/pfernique/PyClangLite.git
cd PyClangLite
sudo python setup.py install
cd ..
sudo rm -rf PyClangLite
```

## Contribute

If you want to contribute, please have a look to the [github workflow](http://virtualplants.github.io/contribute/devel/git-workflow.html)
