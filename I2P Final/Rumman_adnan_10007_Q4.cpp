#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void input(string *a, int size) {
	
	for (int i=0; i<size; i++) {
		cout << "Enter email: ";	
		getline(cin,a[i]);
			
	}
	

}
bool duplicate(string email, string *a, int size){
	
	for (int i = 0; i<=size; i++) {
		if (a[i] == email) {
			return true;
		}
	}
	return false;
}

int main () {
	
	int size;
	bool check = 1;
	cout << "How many emails you have in databases: ";
	cin >> size;
//	getch();
	
	string userName;
	string password;
	const string mail = "admin";
	const string pass = "Pass123";
	input(emails,);
	
    cout << "Enter your user name: ";
    getline (cin,userName);
    cout << "Enter your password: ";
    getline (cin,password);
    
    
    
	
	
	
	
	
	
	
	
	return 0;
}



