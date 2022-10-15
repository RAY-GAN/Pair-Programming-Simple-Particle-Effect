//Sai Anirudh
#include "Game.h"

using namespace gm;

Game::Game() {

}

void Game::handleInput(RenderWindow& window) {

	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window.close();
		if (event.type == sf::Event::MouseButtonPressed) {
			Vector2f position;
			float velocity = 1.0;
			int size = 10;
			float seconds = 1.0;
			position.x = Mouse::getPosition(window).x;
			position.y = Mouse::getPosition(window).y;

			particleEffect = new ParticleEffect(position, size, velocity, seconds);
			
		}
		
		
	}
}

void Game::update(RenderWindow& window) {

	if (particleEffect != nullptr) {
		particleEffect->Update();
	}
}

void Game::render(RenderWindow& window) {
	
	window.clear();

	if (particleEffect != nullptr) {
		particleEffect->Render(window);
	}

	window.display();

	
}

Game::~Game() {

}