#include <iostream>
using namespace std;

int main () {
	
	//Declaration
	
	int numbers[8] = {};
//	int evenArray[8] = {};
//	int oddArray[8] ={};
	int count = 1, evenNumbers = 0, oddNumbers = 0;
	
	
	
	cout<< "######################################################\n";
	cout<< "  Insert numbers in reverse order in different array\n";
	cout<< "######################################################\n" << endl;
	
	//Calculation
	while (count<=8) {
		
		cout << "\nEnter number "<< count << ": ";
		cin >>numbers[count];
		
		if (numbers[count] % 2 == 0) {
			evenNumbers++;
		}
		else {
			oddNumbers++;
		}
		
		count++;
	}

	//Output
	cout << "\n\nTotal Even numbers are: " << evenNumbers << endl;
	cout << "Total Odd numbers are: " << oddNumbers << endl;
	
	return 0;
}
