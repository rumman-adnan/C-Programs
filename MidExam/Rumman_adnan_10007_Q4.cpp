#include <iostream>
#include <string.h>

using namespace std;

int main () {
	
	float a, b, c;
	int xOld = 0, xNew = 0, count = 0, xDifference;
	const int rate = 0.001;
	float derivative;
	
	cout << "##########################\n";
	cout << "Quadratic function\n";
	cout << "###########################\n\n\n";
	
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	
		while (xDifference< 0.01 || count >1000) {
			
			
	
			derivative = (2* a* xOld) + b;
			
			if (derivative > 0) {
				xNew = xOld - rate * derivative;
			}
			else if (derivative < 0) {
				
				derivative = -1*derivative;
				xNew = xOld - rate * derivative;
				
			}
			xDifference = xNew - xOld;
			
			count++;
	
		}
		cout << "The final value of x is: " << xNew;
	

	return 0;	
}
