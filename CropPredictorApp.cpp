// CropPredictorApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Crop.h"
#include "CropTypes.h"
#include <iostream>
#include <string>

using namespace std;




int main()
{
	Wheat w(21, 23, 25);
	Crop *c = &w;
	cout << c->getName()<<endl;
	cout << w.getName() << endl;
    return 0;
}

