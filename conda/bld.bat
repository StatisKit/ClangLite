echo ON

git clone https://github.com/StatisKit/PyClangLite.git
if %errorlevel% neq 0 exit /b %errorlevel%

cd PyClangLite/conda
if %errorlevel% neq 0 exit /b %errorlevel%

conda install python-pkgtk -c statiskit -c conda-forge
if %errorlevel% neq 0 exit /b %errorlevel%

git clone https://gist.github.com/c491cb08d570beeba2c417826a50a9c3.git config-toolchain
cd config-toolchain
call config.bat
cd ..

conda build libclang -c statiskit -c conda-forge
if %errorlevel% neq 0 exit /b %errorlevel%

:: conda build libclanglite -c statiskit -c conda-forge
:: if %errorlevel% neq 0 exit /b %errorlevel%

:: conda build python-clanglite -c statiskit -c conda-forge
:: if %errorlevel% neq 0 exit /b %errorlevel%
