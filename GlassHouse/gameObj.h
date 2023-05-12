#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <String>
#include <stdio.h>

namespace GlassHouse {
	class gameObj {
	public:
		gameObj();
		gameObj(int, int);
		void set_i(int);
		int get_i();
		void set_j(int);
		int get_j();
		void set_w(int);
		int get_w();
		void set_l(int);
		int get_l();
		void setSprite(std::string path);
		SDL_Texture* getSprite();
	private:
		int i;
		int j;
		int w;
		int l;
		SDL_Texture* sprite;
	};
}