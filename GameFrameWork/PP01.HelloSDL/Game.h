#pragma once
#include "TextureManager.h"

class Game
{
public:
	Game() {}
	~Game() {}
	bool init(const char* title, int xpos, int ypos,
		int width, int height, bool fullscreen);

	void render();
	void update();
	void handleEvents();
	void clean();
	bool running() { return m_bRunning; }

private:
	SDL_Window * m_pWindow = 0;
	SDL_Renderer* m_pRenderer = 0;
	bool m_bRunning = true;

	int m_currentFrame;
	TextureManager m_textureManager;

	//SDL_Texture* m_pTexture;
	//SDL_Rect m_sourceRectangle; //¿øº» »ç°¢Çü
	//SDL_Rect m_destubationRetangle; //´ë»ó »ç°¢Çü
};