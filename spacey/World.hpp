#pragma once

#include <vector>

using std::vector;

#include "StarSystem.hpp"

class World
{
public:
	World();

private:
	void generate();

	vector<StarSystem> starSystems;

};

