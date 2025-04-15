// ProceduralBuildings.cpp : Defines the entry point for the application.
//

#include "ProceduralBuildings.h"
#include <cstdlib>

Building ProceduralBuilding::generateBuilding() {
	Building b;
	b.width = 5;
	b.height = 10;
	b.depth = 5;
	return b;
}