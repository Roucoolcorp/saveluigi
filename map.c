#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	if(SDL_INIT(SDL_INIT_EVERYTHING) != 0)
	{
		fprintf(stderr,"Échec de l'initialisation de la SDL (%s)\n",SDL_GetError());
		exit(EXIT_FAILURE);
	}
	SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);

	SDL_Quit();

	return EXIT_SUCCESS;
}
