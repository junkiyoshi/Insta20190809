#pragma once
#include "ofMain.h"

class Particle {
public:
	Particle();
	~Particle();

	void update(vector<unique_ptr<Particle>>& particles);
	void draw(vector<unique_ptr<Particle>>& particles);
	glm::vec2 separate(vector<unique_ptr<Particle>>& particles);
	glm::vec2 align(vector<unique_ptr<Particle>>& particles);
	glm::vec2 cohesion(vector<unique_ptr<Particle>>& particles);
	glm::vec2 seek(glm::vec2 target);
	void applyForce(glm::vec2 force);

private:
	glm::vec2 location;
	glm::vec2 velocity;
	glm::vec2 acceleration;

	float range;
	float max_force;
	float max_speed;
	int wall;

	ofColor color;
};