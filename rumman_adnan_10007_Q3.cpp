#include<iostream>
using namespace std;


int main() {
	
	int charges;		//we can enter value  in integer
	string vehicleType; // text input, more than 1 letters
	
	
	cout<< "##################\n";
	cout<< "Car Wash Service\n";
	cout<< "##################\n" << endl;
	
	
	
	cout << "Enter your vehicle category: (Motorbike / Motorcar / Bus / Truck) \n";
	cin >> vehicleType;
	//getline(cin, vehicleType);
	
	
	if (vehicleType == "Motorbike") {
		
		charges = 100;
		cout << "\n\nyour vehicle category is "<< vehicleType << " and your charges are " << charges << "\n\nAccording to our rules: ";
		cout << "If there is a motorbike and a motorcar consecutive, then they can be serviced simultaneously.\n";
	
	}
	else if (vehicleType== "Motorcar") {
		
		charges = 200;
		cout << "\n\nyour vehicle category is "<< vehicleType << " and your charges are " << charges << "\n\nAccording to our rules: ";
		cout << "No two consecutive motorcars will be washed.\n";
	}
	else if (vehicleType== "Bus") {
		charges = 1000;
		cout << "\n\nyour vehicle category is "<< vehicleType << " and your charges are " << charges << "\n\nAccording to our rules: ";
		cout << "No two consecutive buses will be washed and Buses and trucks will have additional 5% tax for service..\n";
	}
	else if (vehicleType== "Truck") {
		charges = 1200;
		cout << "\n\nyour vehicle category is "<< vehicleType << " and your charges are " << charges << "\n\nAccording to our rules: ";
		cout << "Buses and trucks will have additional 5% tax for service.\n";
	}
	else {
		cout << "Please enter right category \n";
	}
	
	
return 0;	
}
