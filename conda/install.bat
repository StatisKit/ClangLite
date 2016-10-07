echo ON

conda install libllvm --use-local -c statiskit
if %errorlevel% neq 0 exit /b %errorlevel%

conda install libclang --use-local -c statiskit
if %errorlevel% neq 0 exit /b %errorlevel%

conda install libclanglite --use-local -c statiskit
if %errorlevel% neq 0 exit /b %errorlevel%

conda install python-clanglite --use-local -c statiskit
if %errorlevel% neq 0 exit /b %errorlevel%