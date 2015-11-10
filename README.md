# PyClangLite

## Documentation

Official documentation is available at [virtualplants.github.io](http://virtualplants.github.io)

## Install

To install VPlants.AutoWIG, you need to install these dependencies:
  - LLVM (http://llvm.org/git/llvm),
  - Clang (https://github.com/llvm-mirror/clang.git),
  - Zlib (http://www.zlib.net/),
  - Boost.Python (https://github.com/boostorg/python),
  
In particular to install LLVM and Clang, you need to follow instructions on the *Getting Started page of LLVM* (http://llvm.org/docs/GettingStarted.html) to install both LLVM and Clang .
Nevertheless, note that PyClangLite needs LLVM/Clang installed as shared libraries and runtime type information.
As a consequence, on a Ubuntu distribution, you should type

```
cmake -G "Unix Makefiles" -DBUILD_SHARED_LIBS=1 -DLLVM_ENABLE_RTTI=1 path/to/llvm
```

## Contribute

If you want to contribute, please have a look to the [github workflow](http://virtualplants.github.io/contribute/devel/git-workflow.html)
