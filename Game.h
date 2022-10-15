//Sai Anirudh
#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Main.hpp>
#include <iostream>

#include "ParticleEffect.h"
//Namespaces
using namespace sf;
using namespace std;

namespace gm {

	class Game {
	public:
		//prototypes
		Game();
		void handleInput(RenderWindow& window);
		void update(RenderWindow& window);
		void render(RenderWindow& window);
		~Game();
	private:
		ParticleEffect* particleEffect;
	};
}




#endif
