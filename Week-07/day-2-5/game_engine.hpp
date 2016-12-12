//============================================================================
// Name        : game_engine.hpp
// Author      : Ak0s
// Description : RPG Game
//============================================================================

#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <time.h>

#define ARROW_UP 0
#define ARROW_RIGHT 1
#define ARROW_DOWN 2
#define ARROW_LEFT 3
#define SPACE 4

class GameContext {
private:
  SDL_Window* screen;
  SDL_Renderer* renderer;
  std::map<std::string, SDL_Texture*> sprites;
  bool keys[5];
public:
  GameContext(unsigned int screen_width, unsigned int screen_height) {
    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();
    screen = SDL_CreateWindow("Almost Zelda by Ak0s",
                              SDL_WINDOWPOS_UNDEFINED,
                              SDL_WINDOWPOS_UNDEFINED,
                              screen_width, screen_height,
                              0);
    renderer = SDL_CreateRenderer(screen, -1, 0);
    reset_keys();
  }

  ~GameContext() {
    for (std::map<std::string, SDL_Texture*>::iterator it = sprites.begin(); it != sprites.end(); ++it) {
      SDL_DestroyTexture(it->second);
    }
    TTF_Quit();
    SDL_Quit();
  }

  void load_file(std::string name) {
    SDL_Surface* result = SDL_LoadBMP(name.c_str());
    SDL_SetColorKey(result, SDL_TRUE, SDL_MapRGB(SDL_AllocFormat(SDL_GetWindowPixelFormat(screen)), 0xFF, 0, 0xFF));
    sprites[name] = SDL_CreateTextureFromSurface(renderer, result);
    SDL_FreeSurface(result);
  }

  void draw_sprite(std::string name, int x, int y) {
    SDL_Rect temp;
    temp.x = x;
    temp.y = y;
    temp.w = 65;
    temp.h = 65;
    SDL_RenderCopy(renderer, sprites[name], NULL, &temp);
  }

  void hide_text(std::string name, int x, int y) {
    SDL_Rect temp;
    temp.x = x;
    temp.y = y;
    temp.w = 685;
    temp.h = 30;
    SDL_RenderCopy(renderer, sprites[name], NULL, &temp);
  }

  void print_text(std::string text, int x, int y, int w, int h) {
    TTF_Font* FontType = TTF_OpenFont("basic.ttf", 80);
    SDL_Color TextColor = {255, 255, 255, 0};
    SDL_Color BackgroundColor = {0, 0, 0, 255};
    SDL_Surface* surfaceMessage = TTF_RenderText_Shaded(FontType, text.c_str(), TextColor, BackgroundColor);
    SDL_Texture* Message = SDL_CreateTextureFromSurface(renderer, surfaceMessage);
    SDL_FreeSurface(surfaceMessage);
    SDL_Rect Message_position;
    Message_position.x = x;
    Message_position.y = y;
    Message_position.w = w;
    Message_position.h = h;
    SDL_RenderCopy(renderer, Message, NULL, &Message_position);
    SDL_DestroyTexture(Message);
  }

  void render() {
    SDL_RenderPresent(renderer);
  }

  void reset_keys() {
    for (unsigned int i = 0; i < 5; ++i) {
      keys[i] = false;
    }
  }

  void on_key_down(unsigned int key_code) {
    keys[key_code] = true;
  }

  bool was_key_pressed(unsigned int key_code) {
    return keys[key_code];
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
      context->reset_keys();
      if (SDL_PollEvent(&event)) {
        switch (event.type) {
          case SDL_QUIT:
            gameover = true;
            break;
          case SDL_KEYDOWN:
            switch (event.key.keysym.sym) {
              case SDLK_ESCAPE:
              case SDLK_q:
                gameover = true;
                break;
              case SDLK_LEFT:
              case SDLK_a:
                context->on_key_down(ARROW_LEFT);
                break;
              case SDLK_RIGHT:
              case SDLK_d:
                context->on_key_down(ARROW_RIGHT);
                break;
              case SDLK_UP:
              case SDLK_w:
                context->on_key_down(ARROW_UP);
                break;
              case SDLK_DOWN:
              case SDLK_s:
                context->on_key_down(ARROW_DOWN);
                break;
              case SDLK_SPACE:
                context->on_key_down(SPACE);
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
