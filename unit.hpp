#include "SDL.h"
#include <cstdio>

class Unit
{
protected:
    SDL_Texture *assets;
    SDL_Rect src;
    SDL_Rect mover;

public:
    Unit(SDL_Texture *);
    virtual void draw(SDL_Renderer *); // draws the child class object onto the SDL surface
    SDL_Rect getMover();
};
