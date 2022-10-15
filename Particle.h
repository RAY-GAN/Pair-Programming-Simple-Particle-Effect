//Sai Anirudh
#ifndef PARTICLE_H
#define PARTICLE_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Main.hpp>
#include <iostream>


//Namespaces
using namespace sf;
using namespace std;

class Particle
{
private:
	
	CircleShape shape;
	Vector2f velocity;
	float lifespan;
	Clock clock;
	bool Isalive;

public:

	Particle(const Vector2f& position, int size, float velo, float seconds);
	void Update();
	void Render(RenderWindow& window);
	Vector2f GetPosition();
	bool IsAlive();
	~Particle();

};


#endif
