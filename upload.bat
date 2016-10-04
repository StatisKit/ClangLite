IF NOT "%APPVEYOR_REPO_BRANCH%"=="master" exit /b 0
IF "%ANACONDA_USERNAME%"=="" exit /b 0
IF "%ANACONDA_PASSWORD%"=="" exit /b 0
CALL conda install -n root anaconda-client
IF %errorlevel% neq 0 exit /b %errorlevel%
CALL anaconda login --username "%ANACONDA_USERNAME%" --password "%ANACONDA_PASSWORD%" --hostname "AppVeyor%APPVEYOR_BUILD_NUMBER%"
IF %errorlevel% neq 0 exit /b %errorlevel%
FOR /f %%i in ('conda build conda/libclang --output') DO (set CONDA_FILE=%%i)
set errorlevel_backup=%errorlevel%
set errorlevel=0
CALL anaconda upload --user conda/libclanglite %CONDA_FILE% || echo "upload failed"
set errorlevel=%errorlevel_backup%
:: FOR /f %%i in ('conda build python-clanglite --output') DO (set CONDA_FILE=%%i)
:: set errorlevel=0
:: CALL anaconda upload --user statiskit %CONDA_FILE% || echo "upload failed"
:: set errorlevel=%errorlevel_backup%
CALL anaconda logout
IF %errorlevel% neq 0 exit /b %errorlevel%
