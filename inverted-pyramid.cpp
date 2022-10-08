#include <iostream>
using namespace std;

int main () {
	
	int rows, space;
	
	cout << "######################\n";
	cout << " Pyramid Star Pattern  \n";
	cout << "######################\n\n";
	
	
	cout << "Enter number of rows: ";
	cin >> rows;
	
	for (int i = 0; i <= rows; i++) {
		
		for (space = rows; space >= rows-i; space--) {
			cout << " ";
		}
		
		for (int j = 1; j <= 2*rows-i-i-1; ++j) {
		
		cout << "*";
		}
		cout << "\n";
	}
		
	

	return 0;
}
