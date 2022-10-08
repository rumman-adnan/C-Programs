#include <iostream>
using namespace std;

int main () {
	
	int rows;
	
	cout << "################\n";
	cout << "  Star Pattern  \n";
	cout << "################\n\n";
	
	cout << "Enter number of rows: ";
	cin >> rows;
	
	for (int i = 1; i <= rows; ++i) {
		
		for (int j = 1; j <= i; ++j) {
		
		cout << "*";
		}
		cout << "\n";
	}
		
//		int i = 0;
//		
//	do 
//	{
//		int j = 0;
//		i++;
//		
//		do {
//				cout << "*";
//				j++;
//				
//		} while(j<i);
//		
//	cout << "\n";
//
//	} while (i<5);

	return 0;
}
