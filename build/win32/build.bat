
call "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall" amd64

cl ..\..\code\win32_cyan.cpp ^
   ..\..\code\cyan.cpp ^
   ..\..\lib\sdl2\win32\x64\SDL2.lib ^
   /I ..\..\lib\sdl2\include

pause
