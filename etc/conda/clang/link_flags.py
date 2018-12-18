## Copyright [2017-2018] UMR MISTEA INRA, UMR LEPSE INRA,                ##
##                       UMR AGAP CIRAD, EPI Virtual Plants Inria        ##
## Copyright [2015-2016] UMR AGAP CIRAD, EPI Virtual Plants Inria        ##
##                                                                       ##
## This file is part of the AutoWIG project. More information can be     ##
## found at                                                              ##
##                                                                       ##
##     http://autowig.rtfd.io                                            ##
##                                                                       ##
## The Apache Software Foundation (ASF) licenses this file to you under  ##
## the Apache License, Version 2.0 (the "License"); you may not use this ##
## file except in compliance with the License. You should have received  ##
## a copy of the Apache License, Version 2.0 along with this file; see   ##
## the file LICENSE. If not, you may obtain a copy of the License at     ##
##                                                                       ##
##     http://www.apache.org/licenses/LICENSE-2.0                        ##
##                                                                       ##
## Unless required by applicable law or agreed to in writing, software   ##
## distributed under the License is distributed on an "AS IS" BASIS,     ##
## WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or       ##
## mplied. See the License for the specific language governing           ##
## permissions and limitations under the License.                        ##

import os

with open('config.txt', 'r') as filehandler:
    output = filehandler.readlines()
LIBRARY_PATH = list()
read = False
for line in output:
    if line.startswith('LIBRARY_PATH='):
        line = line.lstrip('LIBRARY_PATH=').strip()
        LIBRARY_PATH.extend(line.split(':'))
LIBRARY_PATH = {os.path.realpath(library_path).replace(os.environ.get('BUILD_PREFIX', '$BUILD_PREFIX'), '$PREFIX') for library_path in LIBRARY_PATH}
print(" ".join(["-Wl,-rpath," + library_path + " -L" + library_path for library_path in LIBRARY_PATH]))