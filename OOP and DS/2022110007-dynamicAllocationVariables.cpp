#include <iostream>
using namespace std;


int main () {
	
	// Dynamic memory allocation of variables
	int *i = new int(), *inputNum = new int(), *totalSum = new int();
	
	*inputNum = 0, *totalSum = 0, *i=0;
	while (*inputNum <= 0) {
		
		cout << "\nEnter the number: ";
		cin >> (*inputNum);
		
		if ((*inputNum)> 0) {
			break;
		}
		
	}
	
	
    for((*i) = 0; (*i) <= (*inputNum); (*i)++) {
		
		(*totalSum) = (*totalSum) + (*i);
	
	}
	cout << "Output is: " << (*totalSum);
	
	return 0;
}
