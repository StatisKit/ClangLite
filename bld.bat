CALL conda build conda/libclang -c statiskit -c conda-forge
IF %errorlevel% neq 0 exit /b %errorlevel%
:: CALL conda install libclang --use-local -c statiskit -c conda-forge
:: IF %errorlevel% neq 0 exit /b %errorlevel%
:: CALL conda build conda/libclanglite -c statiskit -c conda-forge
:: IF %errorlevel% neq 0 exit /b %errorlevel%
:: CALL conda install libclanglite --use-local -c statiskit -c conda-forge
:: IF %errorlevel% neq 0 exit /b %errorlevel%
:: CALL conda build conda/python-clanglite -c statiskit -c conda-forge
:: IF %errorlevel% neq 0 exit /b %errorlevel%
