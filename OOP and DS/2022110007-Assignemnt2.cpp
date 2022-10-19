#include <iostream>
using namespace std;

int main () {
	
	int value;
	int *ptr;
	
	cout << "\nEnter value: ";
	cin >> value;
	cout << "The output is: " << value;
	
	ptr = & value;
	
	cout << "\n\nChange value using pointer: ";
	cin >> *ptr;
	cout << "The output is: " << value;
	
	return 0;
}
