import os

with open('config.txt', 'r') as filehandler:
    output = filehandler.readlines()
LIBRARY_PATH = list()
read = False
for line in output:
    if line.startswith('LIBRARY_PATH='):
        line = line.lstrip('LIBRARY_PATH=').strip()
        LIBRARY_PATH.extend(line.split(':'))
LIBRARY_PATH = {os.path.realpath(library_path).replace(os.environ.get('PREFIX', '$PREFIX'), '$PREFIX') for library_path in LIBRARY_PATH}
print " ".join(["-Wl,-rpath," + library_path + " -L" + library_path for library_path in LIBRARY_PATH])