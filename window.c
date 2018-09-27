#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

void create_window()
{
    	if (SDL_Init(SDL_INIT_EVERYTHING) != 0 )
    	{
        	fprintf(stdout,"Échec de l'initialisation de la SDL (%s)\n",SDL_GetError());
    	}
	SDL_Window* window;
	SDL_Event closing;
	int close = 0;
	window = SDL_CreateWindow("Test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
	if(window == 0)
	{
		printf("Window creation error\n");
		SDL_Quit();
	}
	while(close == 0)
	{
		SDL_WaitEvent(&closing);
		if(closing.window.event == SDL_WINDOWEVENT_CLOSE)
		{
			close = 1;
		}
	}
	SDL_DestroyWindow(window);
    	SDL_Quit();
}

int main()
{
	create_window();
	return 0;
}
