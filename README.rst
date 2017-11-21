**ClangLite**: Minimal Interpreted Interfaces for the **Clang** *C++* Library
#############################################################################

This *Python* Interface to **Clang** provides a relatively small API that exposes facilities for parsing source code into an abstract syntax tree (AST):

* loading already-parsed ASTs,
* traversing the AST,
* associating physical source locations with elements within the AST,
* and other facilities that support **Clang**-based development tools.

The intent is to propose an *Python* API highly similar to the *C++* API (contrarily to libclang) for each release of **Clang**, providing only the basic functionality needed to support development tools. 

For more information refers to **AutoWIG** `documentation <http://autowig.readthedocs.io/>`_.

.. sidebar:: Summary

    :Status: |TRAVIS| |COVERALLS| |LANDSCAPE| |READTHEDOCS|
    :License: |LICENSE|
    :Authors: |AUTHORS|

.. |LICENSE| replace:: see |LICENSELINK|_ file

.. |AUTHORS| replace:: see |AUTHORSLINK|_ file

.. |VERSION| replace:: 0.1.0

.. |LICENSELINK| replace:: LICENSE.rst

.. _LICENSELINK : LICENSE.rst

.. |AUTHORSLINK| replace:: AUTHORS.rst

.. _AUTHORSLINK : AUTHORS.rst

.. |VERSION| replace:: 0.1.0

.. |TRAVIS| image:: https://travis-ci.org/StatisKit/ClangLite.svg?branch=master
           :target: https://travis-ci.org/StatisKit/ClangLite
           :alt: Travis

.. |COVERALLS| image:: https://coveralls.io/repos/github/StatisKit/ClangLite/badge.svg?branch=master
               :target: https://coveralls.io/github/StatisKit/ClangLite?branch=master
               :alt: Coveralls

.. |LANDSCAPE| image:: https://landscape.io/github/StatisKit/ClangLite/master/landscape.svg?style=flat
                :target: https://landscape.io/github/StatisKit/ClangLite/master
                :alt: Landscape

.. Copyright [2017-2018] UMR MISTEA INRA, UMR LEPSE INRA,                ..
..                       UMR AGAP CIRAD, EPI Virtual Plants Inria        ..
.. Copyright [2015-2016] UMR AGAP CIRAD, EPI Virtual Plants Inria        ..
..                                                                       ..
.. This file is part of the AutoWIG project. More information can be     ..
.. found at                                                              ..
..                                                                       ..
..     http://autowig.rtfd.io                                            ..
..                                                                       ..
.. The Apache Software Foundation (ASF) licenses this file to you under  ..
.. the Apache License, Version 2.0 (the "License"); you may not use this ..
.. file except in compliance with the License. You should have received  ..
.. a copy of the Apache License, Version 2.0 along with this file; see   ..
.. the file LICENSE. If not, you may obtain a copy of the License at     ..
..                                                                       ..
..     http://www.apache.org/licenses/LICENSE-2.0                        ..
..                                                                       ..
.. Unless required by applicable law or agreed to in writing, software   ..
.. distributed under the License is distributed on an "AS IS" BASIS,     ..
.. WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or       ..
.. mplied. See the License for the specific language governing           ..
.. permissions and limitations under the License.                        ..

.. |READTHEDOCS| image:: https://readthedocs.org/projects/PyClangLite/badge/?version=latest
                :target: http://pyclanglite.readthedocs.io/en/latest
                :alt: Read the Docs
