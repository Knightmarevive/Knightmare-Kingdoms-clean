@echo off
setlocal enabledelayedexpansion

set "totalDiff=0"

for /r %%i in (*.pac) do (
    echo Processing file: %%i

    rem Get size before operation
    set "sizeBefore=%%~zi"


    rem Run the pac operation
    pac "%%i"

    rem Get size after operation
    for %%j in ("%%i") do set "sizeAfter=%%~zj"
    echo Size before: !sizeBefore! bytes
    echo Size after: !sizeAfter! bytes

    rem Calculate size difference
    set /a "diff=!sizeBefore! - !sizeAfter!"
    echo Size difference: !diff! bytes

    rem Add to total difference
    set /a "totalDiff+=diff"

    echo.
)

echo Total size difference: %totalDiff% bytes

endlocal
pause