#include <iostream>
using namespace std;


float avg(float a, float b) {      // positional mapping of parameters
	
	
	cout << "\nThe average of 2 numbers is: ";
	return (a+b) / 2;
	
}
string decorateHeading(string headingText) {
	
	cout << endl;
	for (int i=0; i<headingText.length(); i++) {
		putchar('#');
	}
	
	putchar('\n');
	cout << headingText;
	putchar('\n');
	
	for (int i=0; i<headingText.length(); i++) {
		putchar('#');
	}
	putchar('\n');
	putchar('\n');

}

void dashSeparator (int dashCount = 25) {
	
	cout << endl << endl;
	for (int i = 1; i <= dashCount; ++i) {
		putchar('*');
	}
	cout << endl << endl;
}


float buildingMaterialEstimator(float area, float cementCost, float sandPrice, float steelPrice, float paintPrice, float bricksCost, float tilesCost) {
	
	area = area /1000;
	float cement = cementCost * 400 * area;
	float sand = sandPrice * 81.6 * area;
	float steel = steelPrice * area * 4000;
	float paint = paintPrice * area * 180;
	float bricks = bricksCost * area * 800;
	float tiles = tilesCost * area * 325;
	
	cout << "\n\nThe estimated cost for your work is: ";
	float result = cement + sand + steel + paint + bricks + tiles;
	return result;
	
}

int main () {
	
	
//	cout << decorateHeading("Student Management System");
	
	cout << avg(3.6, 5.7);

	float area, cementCost,  sandPrice,  steelPrice,  paintPrice,  bricksCost, tilesCost;
	
	dashSeparator(40);
	cout << "Estimation of Building Material Cost";
	dashSeparator (40);
	
	cout << "Enter the area is sq. foot: ";
	cin >> area;
	cout << "Enter cement cost for 1 bag: ";
	cin >> cementCost;
	
	cout << "Enter the sand price for 1 ton: ";
	cin >> sandPrice;
	
	cout << "Enter the price of steel for 1 kg: ";
	cin >> steelPrice;
	cout << "Enter price of paint for 1 liter: ";
	cin >> paintPrice;
	
	cout << "Enter the 1 brick price: ";
	cin >> bricksCost;
	cout << "Enter 1 tile price: ";
	cin >> tilesCost;
	
	cout << buildingMaterialEstimator (area,cementCost, sandPrice, steelPrice, paintPrice, bricksCost, tilesCost);
	
	
	return 0;
}

