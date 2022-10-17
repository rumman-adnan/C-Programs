#include <iostream>
#include <string.h>

using namespace std;

int main () {
	
	
	string name;
	int age;
	string contactNumber; 
	
	cout << "##########################\n";
	cout << "USER DATA COLLECITON FORM\n";
	cout << "###########################\n\n\n";
	
	
	cout <<"Personal Information: \n";
	cout <<"**********************\n\n";
	
	cout << "Enter Full Name: ";
	getline(cin,name);
	
	cout << "Enter Age: ";
	cin >> age;
	
	cout << "Enter contact Number: ";
//	getline(cin,contactNumber);
	cin >> contactNumber;
//	getline( cin, contactNumber, ' ');
	
	cout << "\n\nConfirm Details:\n";
	cout << "********************\n";
	
	cout << "\nFull Name: " << name;
	cout << "\nAge: " << age;
	cout << "\nContact Number: " << contactNumber;
	
	
	
	
	


  return 0;	
}
