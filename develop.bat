@echo off

title Auspice command tool
set WORKDIR=%cd%
call "%VC2022%" x64
call "%Qt5_DIR%\bin\qtenv2.bat"
set PATH = %PATH%;D:\Qt\qtcreator-8.0.2\bin\jom
cd /d %WORKDIR%
echo cmake -B build -G "Visual Studio 17 2022" -A x64 -T v143 -DCMAKE_BUILD_TYPE=Debug -DCMAKE_SYSTEM_VERSION=10.0.20348.0
echo cmake -B build -A x64
echo ctest --test-dir build -C debug
cmd /k