//Sai Anirudh
#include "ParticleEffect.h"


	ParticleEffect::ParticleEffect(const Vector2f& position, int size, float velo, float seconds) {
		for (int i = 0; i < p_num; i++) {
			p_Array[i] = new Particle(position, size, velo, seconds);
		}
	}


	void ParticleEffect::Update() {
		for (int i = 0; i < p_num; i++) {
			if (p_Array[i] != nullptr) {
				p_Array[i]->Update();
			}
		}
	}

	void ParticleEffect::Render(RenderWindow& window) {
		for (int i = 0; i < p_num; i++) {
			if (p_Array[i] != nullptr) {
				p_Array[i]->Render(window);
			}
		}
	}

	void ParticleEffect::Emit(const Vector2f& position, int size, float velo, float seconds) {
		for (int i = 0; i < p_num; i++) {
			p_Array[i] = new Particle(position, size, velo,seconds);
		}
	} //- creates a new particle for every element of the particles array

	void ParticleEffect::AddParticle(int index, const Vector2f& position, int size, float velo, float seconds) {
		p_Array[index] = new Particle(position, size, velo, seconds);
	} //- adds a new particle at the specified index in the particles array(it should also randomize the particle velocity in some way)


	ParticleEffect::~ParticleEffect() {
		for (int i = 0; i < p_num; i++) {
			if (!(p_Array[i]->IsAlive())) {
				delete p_Array[i];
				p_Array[i] = nullptr;
			}
		}
	}