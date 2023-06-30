#include "StarSystem.hpp"

#include <iostream>

StarSystem::StarSystem(unsigned int spriteID) {
	generate();
}

void StarSystem::generate() {
	float deltaOrbitRadius = (PLANET_ORBIT_RADIUS_MAX - PLANET_ORBIT_RADIUS_MIN) / NUMBER_OF_PLANETS;
	for (unsigned int i = 0; i < NUMBER_OF_PLANETS; i++) {
		float orbit_radius = PLANET_ORBIT_RADIUS_MIN + deltaOrbitRadius * i;
		Planet planet(orbit_radius, 1);
		planets.push_back(planet);
	}
}

std::vector<Planet> StarSystem::getPlanets() const {
	return planets;
}

std::ostream& operator<<(std::ostream& os, StarSystem starSystem) {
	os << "Star System";

	for (auto& planet : starSystem.getPlanets()) {
		os << planet;
	}

	return os;
}
