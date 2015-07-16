/* NOTE(kalinovcic):
	Ovaj file postoji samo zato da se ne bi otvarao CMD
	na Windowsima kada se pokrece igra. */

#include <windows.h> // Za strukture koje prima WinMain

#include "cyan.h"

/* NOTE(kalinovcic):
	Ovo je entry point na Windowsima, ovdje se prvo desavaju
	stvari specificne za Windowse, a onda se poziva zajednicki
	cyanMain. */
int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
			LPSTR lpCmdLine, int nCmdShow)
{
	cyanMain();
	return 0;
}
