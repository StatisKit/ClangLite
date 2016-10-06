echo ON

git clone https://github.com/StatisKit/PyClangLite.git
if %errorlevel% neq 0 exit /b %errorlevel%

cd PyClangLite/conda
if %errorlevel% neq 0 exit /b %errorlevel%

conda install python-pkgtk -c statiskit -c conda-forge
if %errorlevel% neq 0 exit /b %errorlevel%

for /f %%i in ('pkgtk toolchain') DO (set TOOLCHAIN=%%i)
if %errorlevel% neq 0 exit /b %errorlevel%

conda build libclang -c statiskit -c conda-forge
if %errorlevel% neq 0 exit /b %errorlevel%

:: conda build libclanglite -c statiskit -c conda-forge
:: if %errorlevel% neq 0 exit /b %errorlevel%

:: conda build python-clanglite -c statiskit -c conda-forge
:: if %errorlevel% neq 0 exit /b %errorlevel%
