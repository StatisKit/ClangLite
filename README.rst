PyClangLite
===========

This *Python* Interface to **Clang** provides a relatively small API that exposes facilities for parsing source code into an abstract syntax tree (AST):

* loading already-parsed ASTs,
* traversing the AST,
* associating physical source locations with elements within the AST,
* and other facilities that support **Clang**-based development tools.

The intent is to propose an *Python* API highly similar to the *C++* API (contrarily to libclang) for each release of **Clang**, providing only the basic functionality needed to support development tools. 

For more information refers to **AutoWIG** `documentation <http://autowig.readthedocs.io/>`_.

.. sidebar:: Summary

    :Version: |VERSION|
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

.. |TRAVIS| image:: https://travis-ci.org/StatisKit/PyClangLite.svg?branch=master
           :target: https://travis-ci.org/StatisKit/PyClangLite
           :alt: Travis

.. |COVERALLS| image:: https://coveralls.io/repos/github/StatisKit/PyClangLite/badge.svg?branch=master
               :target: https://coveralls.io/github/StatisKit/PyClangLite?branch=master
               :alt: Coveralls

.. |LANDSCAPE| image:: https://landscape.io/github/StatisKit/PyClangLite/master/landscape.svg?style=flat
                :target: https://landscape.io/github/StatisKit/PyClangLite/master
                :alt: Landscape
                
.. |READTHEDOCS| image:: https://readthedocs.org/projects/PyClangLite/badge/?version=latest
                :target: http://pyclanglite.readthedocs.io/en/latest
                :alt: Read the Docs
