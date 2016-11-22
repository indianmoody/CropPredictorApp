#include "stdafx.h"
#include "CropTypes.h"
#include "Crop.h"
#include <iostream>
#include <string>

using namespace std;

Barley::Barley(float x1, float x2, float x3) : Crop(x1, x2, x3) {
	name = "barley";
}

string Barley::getName() {
	return name;
}
