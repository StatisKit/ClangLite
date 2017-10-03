##################################################################################
#                                                                                #
# AutoWIG: Automatic Wrapper and Interface Generator                             #
#                                                                                #
# Homepage: http://autowig.readthedocs.io                                        #
#                                                                                #
# Copyright (c) 2016 Pierre Fernique                                             #
#                                                                                #
# This software is distributed under the CeCILL license. You should have       #
# received a copy of the legalcode along with this work. If not, see             #
# <http://www.cecill.info/licences/Licence_CeCILL_V2.1-en.html>.                 #
#                                                                                #
# File authors: Pierre Fernique <pfernique@gmail.com> (19)                       #
#                                                                                #
##################################################################################

import six
import os
from setuptools import setup, find_packages

packages = {"" : "src" + os.sep + "py"}
for package in find_packages("src" + os.sep + "py"):
    packages[package] = "src" + os.sep + "py"

setup(packages = packages.keys(),
      package_dir = {"" : "src" + os.sep + "py"},
      name = 'clanglite',
      version = '1.0.0',
      author = 'Pierre Fernique',
      author_email = 'pfernique@gmail',
      description = '',
      long_description = '',
      license = 'CeCILL',
      package_data = {package: [ "*.so", "*.dll"] for package in packages},
      entry_points = {'autowig.parser': ['clanglite = clanglite.autowig_parser:autowig_parser']},
        zip_safe = False
    )