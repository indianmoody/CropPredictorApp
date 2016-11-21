#include "stdafx.h"
#include "CropTypes.h"
#include "Crop.h"
#include <iostream>
#include <string>

using namespace std;

Wheat::Wheat(float x1, float x2, float x3) : Crop(x1, x2, x3) {
	name = "wheat";
}

string Wheat::getName() {
	return name;
}
