import os

with open('config.txt', 'r') as filehandler:
    output = filehandler.readlines()
INCLUDE_DIRS = set()
read = False
for line in output:
    if line == '#include <...> search starts here:\n':
        read = True
    elif line == 'End of search list.\n':
        read = False
    elif read:
        INCLUDE_DIRS.add(os.path.realpath(line.strip()))
print('-I' + ' -I'.join(INCLUDE_DIRS))