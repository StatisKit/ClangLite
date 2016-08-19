# PyClangLite

This Python Interface to Clang provides a relatively small API that exposes facilities for parsing source code into an abstract syntax tree (AST), loading already-parsed ASTs, traversing the AST, associating physical source locations with elements within the AST, and other facilities that support Clang-based development tools. The intent is to propose an API that is relatively unstable (contrarily to libclang) for each release of Clang, providing only the basic functionality needed to support development tools. 
