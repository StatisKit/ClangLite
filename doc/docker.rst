.. ................................................................................ ..
..                                                                                  ..
..  PyClangLite: Python bindings for Clang                                          ..
..                                                                                  ..
..  Homepage: http://pyclanglite.readthedocs.io/                                    ..
..                                                                                  ..
..  Copyright (c) 2016 Pierre Fernique                                              ..
..                                                                                  ..
..  This software is distributed under the CeCILL-C license. You should have        ..
..  received a copy of the legalcode along with this work. If not, see              ..
..  <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                  ..
..                                                                                  ..
..  File authors: Pierre Fernique <pfernique@gmail.com> (3)                         ..
..                                                                                  ..
.. ................................................................................ ..

.. _using-docker:

Using Docker
============

Docker is an open-source project that automates the deployment of Linux applications inside software containers.
We provide **Docker** images to enable to run **PyClangLite** on various platforms (in particular Windows and MacOS).
For the installation of **Docker**, please refers to its `documentation <https://www.docker.com/products/overview>`_.
Then, you can use the :code:`statiskit/pyclanglite:trusty` **Docker** image to run **PyClangLite**:

.. code-block:: console

  $ docker run -it statiskit/pyclanglite:trusty
  
Note that, for convenience **IPython** and **Jupyter** packages are installed.
You can therefore use:

* The **IPython** console.

  .. code-block:: console
  
    $ ipython

* The **Jupyter** notebook within the **Firefox** web-browser.

  .. code-block:: console
  
    $ jupyter notebook
    
  This requires to able to run Linux GUI Apps:
  
  * On Linux, this is done using the following command in place of the previous command:
  
    .. code-block:: console
  
      $ docker run -ti --rm -e DISPLAY=$DISPLAY -v /tmp/.X11-unix:/tmp/.X11-unix statiskit/ubuntu:PyClangLite
    
  * On Windows refers to this `post <http://manomarks.github.io/2015/12/03/docker-gui-windows.html>`_.
  
  * On MacOs refers to this `post <https://github.com/docker/docker/issues/8710>`_.
