#include <iostream>
using namespace std;

int main () {
	
	int employees;
	cout << "Enter the number of employees: ";
	cin >> employees;
	
	float salaries[employees] = { };
	
	for (int i=0; i < (sizeof(salaries)/sizeof(salaries[i])); i++) {
		
		cout << "Enter the salaray: ";
		cin >> salaries[i];
	}
	  
	
	
	
	
	return 0;
}
