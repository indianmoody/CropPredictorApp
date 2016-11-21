#pragma once
#include "Crop.h"
#include <iostream>
#include <string>

using namespace std;

class Wheat: public Crop {

public: Wheat(float x1, float x2, float x3);
	
		string name;

public: string getName();
};

