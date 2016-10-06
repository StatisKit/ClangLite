echo ON

conda install libclang -c statiskit
if %errorlevel% neq 0 exit /b %errorlevel%

conda install libclanglite -c statiskit
if %errorlevel% neq 0 exit /b %errorlevel%

conda install python-clanglite -c statiskit
if %errorlevel% neq 0 exit /b %errorlevel%