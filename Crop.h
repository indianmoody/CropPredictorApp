#pragma once
#include <iostream>
#include <string>

using namespace std;


class Crop {

public: Crop(float x1, float x2, float x3);

	float expPricePerKg;
	float expYieldPerAcre;
	float expIncomePerAcre;
	float stabilityFactor;
	float share;
	string name = "crop";

public: virtual string getName();

};
