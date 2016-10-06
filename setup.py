##################################################################################
#                                                                                #
# PyClangLite: Python bindings for Clang                                         #
#                                                                                #
# Homepage: http://pyclanglite.readthedocs.io/                                   #
#                                                                                #
# Copyright (c) 2016 Pierre Fernique                                             #
#                                                                                #
# This software is distributed under the CeCILL-C license. You should have       #
# received a copy of the legalcode along with this work. If not, see             #
# <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 #
#                                                                                #
# File authors: Pierre Fernique <pfernique@gmail.com> (9)                        #
#                                                                                #
##################################################################################

import os
from setuptools import setup, find_packages

packages = {"" : "src" + os.sep + "py"}
for package in find_packages("src" + os.sep + "py"):
    packages[package] = "src" + os.sep + "py"

try:
    from mngit.config import load_config
    config = load_config('.')
except:
    import os
    import yaml
    with open('.' + os.sep + '.pkgtk.yml', 'r') as filehandler:
        config = yaml.load(filehandler.read())

with open('README.rst', 'r') as filehandler:
    long_description = filehandler.read()

setup(packages = packages.keys(),
      package_dir = {"" : "src" + os.sep + "py"},
      name = config['about']['name'],
      version = config['about']['version'],
      author = config['about']['authors'],
      author_email = config['about']['email'],
      description = config['about']['brief'],
      long_description = long_description,
      license = config['license']['plugin'],
      package_data = {package: [ "*.so", "*.dll"] for package in packages},
      entry_points = {'autowig.parser': ['pyclanglite = clanglite.autowig_parser:autowig_parser']},
      zip_safe = False
    )


