#include <iostream>
using namespace std;


float avg(float a, float b) {      // positional mapping of parameters
	
	return (a+b) / 2;
	cout << 2;
}
string decorateHeading(string headingText) {
	
	cout << endl;
	for (int i=0; i<headingText.length(); i++) {
		putchar('#');
	}
	
	cout << endl;
	cout << headingText;
	cout << endl;
	
	for (int i=0; i<headingText.length(); i++) {
		putchar('#');
	}
	cout << endl << endl << endl;

}

void dashSeparator (int dashCount = 25) {
	
	cout << endl;
	for (int i = 1; i <= dashCount; ++i) {
		putchar('*');
	}
	cout << endl;
}


float buildingMaterialEstimator(float area, float cementCost, float sandPrice, float steelPrice, float paintPrice, float bricksCost, float tilesCost) {
	
	area = area /1000;
	float cement = cementCost * 400 * area;
	float sand = sandPrice * 81.6 * area;
//	float steel = steelPrice * area * ;
//	float paint = paintPrice * area * ;
//	float bricks = bricksPrice * area * ;
//	float tiles = tilesCost * area * 
//	
}

int main () {
	
	
	cout << decorateHeading("Student Management System");
	
	cout << avg(3.6, 5.7);
	
	cout << "Section A";
	dashSeparator();
	
	cout << "Section B";
	dashSeparator (50);
	
	return 0;
}
