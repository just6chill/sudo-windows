# sudo-windows
a small tool written in C that simply start powershell or cmd in admin mode called from the normal cmd

-------------------------------------------
GUIDE FOR SELF COMPILING

compile:

    gcc main.c -o sudo.exe
    
add to path:

    setx path "%path%;C:\path\to\sudo"
    
usage:

from the cmd simply type

    sudo ?
--------------------------------------------
GIUDE FOR USING PRECOMPILED MSI INSTALLER:

download and execute sudo_installer.msi

usage:
from the cmd simply type

    sudo ?

--------------------------------------------
![GitHub all releases](https://img.shields.io/github/downloads/just6chill/sudo-windows/total)
![GitHub last commit](https://img.shields.io/github/last-commit/just6chill/sudo-windows)
![GitHub top language](https://img.shields.io/github/languages/top/just6chill/sudo-windows)
