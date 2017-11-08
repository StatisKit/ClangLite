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
      license = 'Apache License 2.0',
      package_data = {package: [ "*.so", "*.dll", "*.pyd"] for package in packages},
      entry_points = {'autowig.parser': ['clanglite = clanglite.autowig_parser:autowig_parser']},
        zip_safe = False
    )
