// CropPredictorApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Crop.h"
#include "CropTypes.h"
#include <iostream>
#include <string>

using namespace std;

void distribute(Crop *crop[]) {
	float totalCropIncome = 0;
	float cropIncome[2];

	for (int i = 0; i < 2; i++) {
		cropIncome[i] = (crop[i]->expIncomePerAcre) * (crop[i]->stabilityFactor);
		totalCropIncome += cropIncome[i];
	}

	for (int i = 0; i < 2; i++) {
		float s = cropIncome[i] / totalCropIncome;
		cout << crop[i]->getName() << ": " << s << endl;
	}
}


int main()
{
	Wheat w(21, 23, 25);
	Wheat w2(32, 453, 43);
	
	Crop *crop[2];
	crop[0] = &w;
	crop[1] = &w2;
	/*
	cout << crop[0]->getName()<<endl;
	cout << w.getName() << endl;
	cout << crop[0]->expPricePerKg << endl;
	*/

	distribute(crop);

    return 0;
}

