echo ON

scons py --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT% --msvc-version=12.0
if errorlevel 1 exit 1

python setup.py install
if errorlevel 1 exit 1

echo OFF