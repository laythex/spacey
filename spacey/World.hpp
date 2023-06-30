#pragma once

#include <vector>

#include "StarSystem.hpp"
#include "constants.cpp"

class World
{
public:
	World();

	std::vector<StarSystem> getStarSystems() const;

private:
	void generate();

	std::vector<StarSystem> starSystems;

};

std::ostream& operator<<(std::ostream& os, World world);

