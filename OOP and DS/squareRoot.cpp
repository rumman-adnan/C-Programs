#include <iostream>
using namespace std;

int main () {
	
	int inches;
	float feet;
	
	cout << "#####################\n";
	cout << "    Square Root \n";
	cout << "#####################\n\n\n";
	
	cout <<"Enter the inches: ";
	cin >> inches;
	
	system("cls");
	
	cout << "#####################\n";
	cout << "  Length Converter \n";
	cout << "#####################\n\n\n";
	
	feet = inches / 12;
	
	cout << "Your feets are: " << feet;
	
	return 0;
}
