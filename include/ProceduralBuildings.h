// ProceduralBuildings.h : Include file for standard system include files,
// or project specific include files.

#pragma once
#include <iostream>
#include <vector>

struct Building {
	int width, height, depth;
	// add windows, doors, materials, etc.
};

class ProceduralBuilding {
	public:
		Building generateBuilding();
};

// TODO: Reference additional headers your program requires here.
