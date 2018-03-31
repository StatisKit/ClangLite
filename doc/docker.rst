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
