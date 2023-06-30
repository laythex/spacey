#include "World.hpp"

World::World() {
	generate();
};

void World::generate() {
	for (unsigned int i = 0; i < NUMBER_OF_STAR_SYSTEMS; i++) {
		StarSystem starSystem(1);
		starSystems.push_back(starSystem);
	}
};

std::vector<StarSystem> World::getStarSystems() const {
	return starSystems;
}

std::ostream& operator<<(std::ostream& os, World world) {
	os << "World";

	for (auto& starSystem : world.getStarSystems()) {
		os << starSystem;
	}

	return os;
}