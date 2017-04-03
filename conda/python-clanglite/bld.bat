echo ON

scons py --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT%

python setup.py install --prefix=%PREFIX%
if errorlevel 1 exit 1

echo OFF