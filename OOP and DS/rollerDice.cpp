#include <iostream>
#include <cstdlib>
using namespace std;


int rollDice() {
	int randomNumber = (rand()%6+1);
	return randomNumber;
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


int main () {
	
//	cout << decorateHeading("Roller Dice");
	
	
	cout << rollDice();
	
	return 0;
}
