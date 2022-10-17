#include <iostream>
#include <string.h>

using namespace std;

int main () {
	
	char vendor;
	float vendorCharges, transactionAmount;
	
	cout << "############################\n";
	cout << "Ecommerce Company Transaction\n";
	cout << "#############################\n\n\n";
	
	cout << "Enter total transaction amount: ";
	cin >> transactionAmount;
	
	
	cout <<"Total Serivice charges for each vendor are: \n";
	
	cout << "\nPaypal: "<< 0.05*(transactionAmount)+0.49;
	cout << "\nStripe "<< 0.01*(transactionAmount)+0.3;
	cout << "\nSkrill "<< 0.025*(transactionAmount)+0.4;
	cout << "\nPayoneer "<< 0.03*(transactionAmount)+0.3;	
	
	cout << "\n\n\nChoose your Vendor: \n";
	cout << "Paypal. Press A\n";
	cout << "Stripe Press T\n";
	cout << "Skrill Press S\n";
	cout << "Payoneer Press P \n";
	cin >> vendor;		
//	getline(cin,vendor);
			
	switch(vendor) {
		
		case 'A': {
			
			vendorCharges = 0.05*(transactionAmount)+0.49;
			break;
		}
					
		case 'T': {
			
			vendorCharges = 0.01*(transactionAmount)+0.3;
			break;
		}
		case 'S': {
			
			vendorCharges = 0.025*(transactionAmount)+0.4;
			break;
		}
		case 'P': {
			
			vendorCharges = 0.03*(transactionAmount)+0.3;
			break;
		}
		default : {
			cout << " Select exact value. ";
			break;
		}
			
		
		
			
	}
	cout << "\nThe vendor with least service charges is Stripe. \n";
		
	cout << "\nThe eCommerce company receives: " << (transactionAmount-vendorCharges);
	
	
	
	return 0;	
}
