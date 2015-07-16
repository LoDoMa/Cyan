#include "cyan.h"

#include <SDL.h>
#include <stdio.h>

static bool running;

static void handleEvents()
{
	SDL_Event event;
	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
		{
			running = false;
		} break;
		}
	}
}

void cyanMain()
{
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Window* window;
	window = SDL_CreateWindow(
		"Cyan",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		640, 480,
		SDL_WINDOW_OPENGL);

	if (!window)
	{
		printf("Error creating SDL window: %s\n", SDL_GetError());
		return;
	}

	running = true;
	while (running)
	{
		// TODO(kalinovcic): Svasta

		handleEvents();
	}

	SDL_DestroyWindow(window);

	SDL_Quit();
}
