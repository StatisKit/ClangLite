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
    with open('.' + os.sep + '.mngit.yml', 'r') as filehandler:
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
    )


