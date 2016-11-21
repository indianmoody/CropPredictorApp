#pragma once
#include <iostream>
#include <string>

using namespace std;

string tries();

class Crop {
	float expPricePerKg;
	float expYieldPerAcre;
	float expIncomePerAcre;
	float stabilityFactor;
	float share;
	string name = "crop";

public: virtual string getName() {
	return name;
}
};
