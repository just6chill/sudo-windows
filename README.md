# sudo-windows
a small tool written in C that simply start powershell or cmd in admin mode called from the normal cmd


compile:

    gcc main.c -o sudo.exe
    
add to path:

    setx path "%path%;C:\path\to\sudo"
    
usage:

from the cmd simply type

    sudo ?
