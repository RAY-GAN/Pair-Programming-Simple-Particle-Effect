//Sai Anirudh
#include "Particle.h"
#include "Random.h"

Particle::Particle(const Vector2f& position, int size, float velo, float seconds) {
	shape = CircleShape(Random::Range(size, size*2));
	shape.setPosition(position);
	clock = Clock();
	lifespan = seconds;
	Isalive = true;
	velocity.x = Random::Range(-velo, velo);
	velocity.y = Random::Range(-velo, velo);
}

void Particle::Update() {
	shape.move(velocity);
	Time time1 = clock.getElapsedTime();
	if (time1.asSeconds() >= lifespan) {
		Isalive = false;
	}
}

void Particle::Render(RenderWindow& window) {
	if (IsAlive()) {
		window.draw(shape);
	}
}

Vector2f Particle::GetPosition() {
	return shape.getPosition();
}

bool Particle::IsAlive() {
	return Isalive;
}
Particle::~Particle() {

}