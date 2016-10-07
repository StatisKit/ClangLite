echo OFF

if "%ANACONDA_USERNAME%" == "" set /p ANACONDA_USERNAME="Username: "
if "%ANACONDA_PASSWORD%" == "" set /p ANACONDA_USERNAME=%ANACONDA_USERNAME%%"'s password: "

call conda install -n root anaconda-client
if %errorlevel% neq 0 exit /b %errorlevel%

call anaconda login --username "%ANACONDA_USERNAME%" --password "%ANACONDA_PASSWORD%" --hostname "AppVeyor%APPVEYOR_BUILD_NUMBER%"
if %errorlevel% neq 0 exit /b %errorlevel%


git clone https://gist.github.com/c491cb08d570beeba2c417826a50a9c3.git toolchain
cd toolchain
call config.bat
cd ..
rmdir toolchain /s /q

echo ON

for /f %%i in ('conda build libllvm --output') DO (set CONDA_FILE=%%i)
set errorlevel_backup=%errorlevel%
set errorlevel=0
call anaconda upload --user statiskit %CONDA_FILE% || echo "upload failed"
set errorlevel=%errorlevel_backup%

for /f %%i in ('conda build libclang --output') DO (set CONDA_FILE=%%i)
set errorlevel_backup=%errorlevel%
set errorlevel=0
call anaconda upload --user statiskit %CONDA_FILE% || echo "upload failed"
set errorlevel=%errorlevel_backup%

for /f %%i in ('conda build libclanglite --output') DO (set CONDA_FILE=%%i)
set errorlevel=0
call anaconda upload --user statiskit %CONDA_FILE% || echo "upload failed"
set errorlevel=%errorlevel_backup%

for /f %%i in ('conda build python-clanglite --output') DO (set CONDA_FILE=%%i)
set errorlevel=0
call anaconda upload --user statiskit %CONDA_FILE% || echo "upload failed"
set errorlevel=%errorlevel_backup%

call anaconda logout
