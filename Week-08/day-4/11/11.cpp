//============================================================================
// Name        : 11.cpp
// Author      : Ak0s
//============================================================================

#include <iostream>
#include "draw.h"

using namespace std;


void draw_hexagon(draw& d, SDL_Renderer* renderer, int x_i, int y_i) {
  if (x_i >= 1 && y_i >= 1) {
    for (int i = 0; i < 6; i++) {
      d.DrawBy(renderer, x_i / 2);
      d.TurnTo(60);
      if (i % 2 == 1) {
        draw_hexagon(d, renderer, x_i / 2, y_i / 2);
      }
    }
  }
  return;
}

void draw_something(draw& d, SDL_Renderer* renderer, int x_i, int y_i, int x, int y) {
  d.MoveTo(x_i / 4, y_i / 16);
  draw_hexagon(d, renderer, x_i, y_i);
  return;
}

int main(int argc, char ** argv) {
  bool quit = false;
  SDL_Event event;
  SDL_Init(SDL_INIT_EVERYTHING);
  SDL_Window* window = SDL_CreateWindow("SDL2 Fractal",
    SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 512, 512, 0);
  SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
  SDL_SetRenderDrawColor(renderer, 255, 0, 0, 0);
  SDL_RenderClear(renderer);
  while (!quit) {
    SDL_WaitEvent(&event);
    switch (event.type) {
    case SDL_QUIT:
      quit = true;
      break;
    }
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 0);
    draw d;
    draw_something(d, renderer, 512, 512, 0, 0);
  }
  SDL_RenderPresent(renderer);
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
  return 0;
}
