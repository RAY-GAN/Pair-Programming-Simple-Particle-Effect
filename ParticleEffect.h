//Sai Anirudh
#ifndef PARTICLEEFFECT_H
#define PARTICLEEFFECT_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Main.hpp>
#include <iostream>
#include "Particle.h"

//Namespaces
using namespace sf;
using namespace std;

const int p_num = 20;

class ParticleEffect
{
private:

	Particle* p_Array[p_num];

public:

	ParticleEffect(const Vector2f& position, int size, float velo, float seconds);
	void Update();
	void Render(RenderWindow& window);
	void Emit(const Vector2f& position, int size, float velo, float seconds);
	void AddParticle(int index, const Vector2f& position, int size, float velo, float seconds);
	~ParticleEffect();
};


#endif

