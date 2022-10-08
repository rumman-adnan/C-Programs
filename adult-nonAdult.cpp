#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	
	
	bool isAdult = false;
	int age;
	string fullName, mobileNo;  // string is object not data type

	
	
	cout<< "#####################\n";
	cout<< "Adult/NonAdult userse\n";
	cout<< "#####################\n" << endl;
	
	
	cout << "Enter use age \n";
	
	cin >> age;
	cin.clear(); cin.sync();    //clear previous material from cin, so it takes next input value
	
	if(age > 18) {
		
		isAdult = true;
	}
	
	
	if (isAdult) {
		
		cout << "Enter your full name: ";     
		std::getline(std::cin, fullName);
//		getline(cin, fullName);
//		cin.clear(); cin.sync();		// in mixture in getline and cin, we have to clear cin value then move next. 
		
		cout << "\nEnter your mobile number: ";  
		std::getline(std::cin, mobileNo);
//		getline(cin, mobileNo);
//		cin.clear(); cin.sync();
		
	}
	
	cout << "Recheck your information " << fullName <<"\n"<< mobileNo;
	
	cout << "\n\n Thank you !! ";	
	
	return 0;
}



