#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

	ofSetFrameRate(60);
	ofSetWindowTitle("openFrameworks");

	ofBackground(0);
	ofSetLineWidth(2);
	ofEnableBlendMode(ofBlendMode::OF_BLENDMODE_ADD);

	for (int i = 0; i < 40; i++) {

		auto particle = make_unique<Particle>();
		this->particles.push_back(move(particle));
	}
}

//--------------------------------------------------------------
void ofApp::update() {

	for (auto& particle : this->particles) {

		particle->update(this->particles);
	}
}

//--------------------------------------------------------------
void ofApp::draw() {

	for (auto& particle : this->particles) {

		particle->draw(this->particles);
	}
}

//--------------------------------------------------------------
int main() {

	ofSetupOpenGL(720, 720, OF_WINDOW);
	ofRunApp(new ofApp());
}