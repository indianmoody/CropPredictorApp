#pragma once
#include "Crop.h"
#include <iostream>
#include <string>

using namespace std;

class Wheat: public Crop {
public: Wheat();
	string name;

public: string getName();
};

