@echo off

@REM do not put spaces before and after the = signs
set /p n=Input n: 
set /a original=n
set /a m=1

:repeat
if %n% leq 1 goto done

set /a m=m*n
set /a n=n-1
goto repeat

:done
echo %original%! = %m%

pause