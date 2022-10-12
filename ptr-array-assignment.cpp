#include <iostream>
#include <string.h>
using namespace std;


int main() {
	
	int size;
	
	cout << "Enter the size of array: ";
	cin >>size;
	int array[size] = {};
	int *arrayPtr = array;
	
	
	cout << "\n\nEnter input numbers: \n";
	for (int i=1; i<=size; i++) {
		
		cin >> array[i];
	}
	
//	cout << arrayPtr[3] <<endl;
//	cout << arrayPtr[4] <<endl;
	arrayPtr[3] = 5;
	arrayPtr[4] = 3;
	
//	cout << arrayPtr[3] <<endl;
//	cout << arrayPtr[4] <<endl;

	cout << "The changed elements of array are: " << endl;
	
	for (int i = 1; i<= size; i++)
	
	{
		cout << array[i] << endl;
		
	}
	
	
	
}
