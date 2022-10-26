#include <iostream>
using namespace std;

int main () {
	int size;
	int maxNum = 0;
	cout << "Enter the size of budget: ";
	cin >> size;
	int budgets[size];
	
	for(int i=0; i<size; i++) {
		
		cout << "Enter the budget (" << i << ") : ";
		cin >> budgets[i];
	}
	
	for(int i=0; i<size; i++) {
		
		if (budgets[i] > maxNum) {
			maxNum = budgets[i];
		}
	}
	cout << "The maximum number in this array is: " << maxNum;
	
	return 0;
}
