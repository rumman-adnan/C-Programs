#include<iostream>
#include<conio.h>


int main() {
	
	
	int priority;
	string customerType; // text input, more than 1 letters
	
	
	cout<< "#####################\n";
	cout<< "Customer Service Que\n";
	cout<< "#####################\n" << endl;
	
	
	cout << "Enter customer type: (premium / regular / non-customer) \n";
	cin >> customerType;
	getline(cin, customerType);
	
	
	if (customerType == "premium") {
		priority = 1;
	}
	else if (customerType== "regular") {
		priority = 2;
	}
	else {
		priority = 3;
	}
	
	
	
	cout << "\nYou have been allocated a priority of " << priority << "."<<endl;
	
	cout << "\n\nPress any key to continue...";
	
	getch();
	
	return 0;
}
