#include <iostream>
#include<string.h>
#include <cstring>

using namespace std;

void display(char*);

int main () {
	
	string name = "Rumman Adnan";
	cout << name[0] << "\t" << name[1] << endl; // This is character array
//	cout << name.length();
	char fullName[500];   // by default 16 size
	
	fullName[0] = 'R';        // declare as simple array
	fullName[1] = 'u';

//	cout << fullName[0] << '\t' << fullName[1];
	
	char name1[] = "Rumman Adnan";  
//	cout << name1;
	
	string name2 = "Rumman Adnan"
	char* fullN = display(name1);
	
	string a1 = "Rumman ";
	string a2 = "Adnan";
	string fullName1 = a1+a2;
	
//	cout << endl << fullName1 << endl;
	
//	cout << fullName1.length();
	
	return 0;
}

void display(char* text) {
	char lname[10]
	cout << text;
	
	//we are sending character address. we have to store that addess in char pointer in main
}
