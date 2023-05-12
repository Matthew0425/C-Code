#include "gameObj.h"

namespace GlassHouse {
	gameObj::gameObj() {
		i = 0;
		j = 0;
	}

	gameObj::gameObj(int a, int b) {
		i = a;
		j = b;
	}

	void gameObj::set_i(int a) {
		i = a;
	}

	int gameObj::get_i() {
		return i;
	}

	void gameObj::set_j(int a) {
		j = a;
	}

	int gameObj::get_j() {
		return j;
	}

	void gameObj::setSprite(std::string path) {
		
	}

	SDL_Texture* gameObj::getSprite() {
		return sprite;
	}
}