# PyClangLite

## Documentation

Official documentation is available at [virtualplants.github.io](http://virtualplants.github.io)

## Install

To install VPlants.AutoWIG, you need to install these dependencies:
  - LLVM (http://llvm.org/git/llvm),
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
git clone git@github.com:llvm-mirror/llvm.git
git clone git@github.com:llvm-mirror/clang.git
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
git clone git@github.com:openalea/deploy.git
cd deploy
sudo python setup.py install
cd ..
sudo rm -rf deploy
git clone git@github.com:openalea/sconsx.git
cd sconsx
sudo python setup.py install
cd ..
sudo rm -rf sconsx
git clone git@github.com:VirtualPlants/PyClangLite.git
cd PyClangLite
python setup.py develop --user
```

## Contribute

If you want to contribute, please have a look to the [github workflow](http://virtualplants.github.io/contribute/devel/git-workflow.html)
