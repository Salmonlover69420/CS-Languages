@echo off

set /p n=Enter the amount of rows: 
set line=*

echo %line%

:loop
if %n% leq 1 goto end

set /a n=n-1
set "line=%line% *"

echo %line%

goto loop

:end
pause