#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include <SDL.h>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>

class GameContext {
private:
  SDL_Window* screen;
  SDL_Renderer* renderer;
  std::map<std::string, SDL_Texture*> imgs;
  bool clicked;
public:
  GameContext(unsigned int screen_width, unsigned int screen_height) {
    SDL_Init(SDL_INIT_VIDEO);
    screen = SDL_CreateWindow("Gomoku by Ak0s",
                              SDL_WINDOWPOS_UNDEFINED,
                              SDL_WINDOWPOS_UNDEFINED,
                              screen_width, screen_height,
                              0);
    renderer = SDL_CreateRenderer(screen, -1, 0);
    reset_click();
  }

  ~GameContext() {
    for (std::map<std::string, SDL_Texture*>::iterator it = imgs.begin(); it != imgs.end(); ++it) {
      SDL_DestroyTexture(it->second);
    }
    SDL_Quit();
  }

  void load_file(std::string name) {
    SDL_Surface* result = SDL_LoadBMP(name.c_str());
    SDL_SetColorKey(result, SDL_TRUE, SDL_MapRGB(SDL_AllocFormat(SDL_GetWindowPixelFormat(screen)), 0xFF, 0, 0xFF));
    imgs[name] = SDL_CreateTextureFromSurface(renderer, result);
    SDL_FreeSurface(result);
  }

  void draw_img(std::string name, int x, int y, int w = 40, int h = 40) {
    SDL_Rect img;
    img.x = x;
    img.y = y;
    img.w = w;
    img.h = h;
    SDL_RenderCopy(renderer, imgs[name], NULL, &img);
  }

  void render() {
    SDL_RenderPresent(renderer);
  }

  std::pair<int, int> get_mouse_coordinates() {
    int x, y;
    SDL_GetMouseState(&x, &y);
    std::pair<int, int> mouse_coordinates = {x, y};
    return mouse_coordinates;
  }

  void reset_click() {
    clicked = false;
  }

  void click() {
    clicked = true;
  }

  bool was_clicked() {
    return clicked;
  }
};

class Game {
public:
  virtual void init(GameContext& context) = 0;
  virtual void render(GameContext& context) = 0;
  virtual ~Game() {}
};

class GameEngine {
private:
  GameContext* context;
  Game* game;
public:
  GameEngine(Game* g, unsigned int screen_width, unsigned int screen_height) {
    context = new GameContext(screen_width, screen_height);
    game = g;
    game->init(*context);
  }
  ~GameEngine() {
    delete context;
  }
  void run() {
    SDL_Event event;
    bool gameover = false;
    while (!gameover) {
      context->reset_click();
      if (SDL_PollEvent(&event)) {
        switch (event.type) {
          case SDL_QUIT:
            gameover = true;
            break;
          case SDL_MOUSEBUTTONDOWN:
            switch (event.button.button) {
              case SDL_BUTTON_LEFT:
                context->click();
                break;
            }
            break;
        }
      }
      game->render(*context);
    }
  }
};

#endif
