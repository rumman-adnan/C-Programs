#include<iostream>
#include<stdlib.h>
using namespace std;


int main() {
	string consent;
	
	
	cout<< "##########################\n";
	cout<< "Cookie Terms & Conditions\n";
	cout<< "##########################\n" << endl;
	
	cout << "This website uses cookies in order to offer you the most relevant information. Please accept cookies for optimal performance. ";
	cout << "\n\nDo you consent to the terms and conditions above? (Y/N) \n\n";
	
	cin >> consent;
	
	while (consent == "N") {
	
	system("CLS");
	cout << "\nPlease enter valid output \n\n";
	cout << "This website uses cookies in order to offer you the most relevant information. Please accept cookies for optimal performance.";
	cout << "\n\nDo you consent to the terms and conditions above? (Y/N) \n\n";
	cin >> consent;
	system("CLS");
	
	}
		system("CLS");
		
	cout<< "##########################\n";
	cout<< "Cookie Terms & Conditions\n";
	cout<< "##########################\n" << endl;
		
	cout << "\n\nThank you for your consenting to the terms of service! \n\n";
	
	
	
	
	
	return 0;
}
