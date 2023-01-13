#include <iostream>
using namespace std;

string decorateHeading(string );

int main () {
	
	cout << "\n################";
	cout << "\nTime Converter";
	cout << "\n################";
	
	string foreignCountry;
	int pakHours, pakMins;
	int hours, mins;
	cout << "\n\nEnter the name of foreign country \n1. England \n2. USA \n3. Canada \nEnter amonth these countries: ";
	getline(cin,foreignCountry);
	cout << "\nEnter hours in pakistan time: " ;
	cin >>pakHours;
	cout << "Enter minutes in pakistan time: " ;
	cin >>pakMins;
	char fCountry;
	if (foreignCountry == "England") {
		fCountry = 'e';
	}
	else if (foreignCountry == "USA") {
		fCountry = 'u';
	}
	else if (foreignCountry == "Canada") {
		fCountry = 'c';
	}
	
	switch(fCountry) {
		
		case 'e':{
			hours = pakHours - 7;
			mins = pakMins;
			break;
		}
		if (hours > 24) {
				hours = hours - 24;
				cout << "next day";
			}
		case 'u':{
			
			hours = pakHours+4;
			mins = pakMins+30;
			if (mins > 60) {
				mins = mins - 60;
				hours = hours + 1;
			}
			if (hours > 24) {
				hours = hours - 24;
				cout << "next day";
			}
			
			break;
		}
		case 'c':{
			hours = pakHours+11;
			mins= pakMins;
			if (hours > 24) {
				hours = hours - 24;
				cout << "next day";
			}
			break;
		}
	}
	cout << "\n\nYour time in "<< foreignCountry << "is: " << hours << ":" << mins;
	
	return 0;
}




