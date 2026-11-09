@echo off

echo hi
echo.
echo to

pause

set /a var=1
echo the variable is %var%
@REM  can also add and subtract etc
pause

@REM  %1 %2 %3 ... are arguments you type in terminal after typing file name
@REM  example: dfg.bat 1 2
@REM  1 is %1 and 2 is %2 
set /a add=%1 + %2
echo %1 + %2 = %add%
