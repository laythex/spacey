#include "Planet.hpp"

Planet::Planet(float orbitRadius, unsigned int spriteID) : orbitRadius(orbitRadius), orbitAngle(0) {

}

sf::Vector2f Planet::getLocalPosition() {
	float x = orbitRadius * cos(orbitAngle);
	float y = orbitRadius * sin(orbitAngle);

	return sf::Vector2f(x, y);
};

std::ostream& operator<<(std::ostream& os, Planet planet) {
	os << "Planet";
	return os;
}