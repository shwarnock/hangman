#ifndef _GRAPHICS_H
#define _GRAPHICS_H

#include <SDL.h>
#undef main
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include <SDL_ttf.h>

using namespace std;

class Graphics
{
public:
	static const int SCREEN_WIDTH = 1024;
	static const int SCREEN_HEIGHT = 896;

	const char* WINDOW_TITLE = "Galaga";

private:
	static Graphics* sInstance;
	static bool sInitialized;

	SDL_Window* mWindow;
	SDL_Surface* mBackBuffer;

	SDL_Renderer* mRenderer;

public:
	static Graphics* Instance();
	static void Release();
	static bool Initialized();

	SDL_Texture* LoadTexture(string path);
	SDL_Texture* CreateTextTexture(TTF_Font* font, string text, SDL_Color color);

	void ClearBackBuffer();

	void DrawTexture(SDL_Texture* tex, SDL_Rect* clip = NULL, SDL_Rect* rend = NULL, float angle = 0.0f, SDL_RendererFlip flip = SDL_FLIP_NONE);
	void DrawLine(float startX, float startY, float endX, float endY);

	void Render();

private:
	Graphics();
	~Graphics();

	bool Init();
};

#endif