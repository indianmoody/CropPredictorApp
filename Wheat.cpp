#include "stdafx.h"
#include "CropTypes.h"
#include "Crop.h"
#include <iostream>
#include <string>

using namespace std;

Wheat::Wheat() {
	name = "wheat";
}

string Wheat::getName() {
	return name;
}
