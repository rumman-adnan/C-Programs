#include <iostream>

using namespace std;

int main() {
	
	int age;
	cout << "Enter age: ";
	cin>>age;
	
	if (age >= 0) {
		
		
		if(age >= 18) {
			cout<< "Adult";
		}
		else {
			
			if (age >= 13) {
				cout << "Teenager";
			}
			else {
				if (age >= 2) {
					cout << "Child";
				}
				else {
					cout << "Baby";
				}
				
			}
		}
	}
	return 0;	
}
