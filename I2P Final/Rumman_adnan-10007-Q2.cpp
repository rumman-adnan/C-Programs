#include <iostream>
using namespace std;


void average (int* a, int* b) {
	cout << ((*a)+(*b))/2;
}

int main () {

	cout << "\n#############################################";
	cout << "\nAverage of Numbers with Dynamic Allocation";
	cout << "\n#############################################\n\n";
	int* a = new int();
	int* b = new int();

	cout << "Enter first number: ";
	cin >> (*a);
	cout << "Enter second number: ";
	cin >> (*b);
	
	average (a,b);

	
	
	
	return 0;
}

