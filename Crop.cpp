#include "stdafx.h"
#include "Crop.h"
#include <iostream>
#include <string>

using namespace std;

Crop::Crop(float x1, float x2, float x3) {
	expPricePerKg = x1;
	expYieldPerAcre = x2;
	expIncomePerAcre = x1 * x2;
	stabilityFactor = x3;
}

string Crop::getName() {
	return name;
}