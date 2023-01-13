#include <iostream>
using namespace std;


class customer {
	public: 
	
	int ID;
	int balance;
	int bill;
};

int main () {
	
    cout << "\n################";
	cout << "\nSpeedo Bus ";
	cout << "\n################\n";
	
	int stops;
	bool againTravel;		// Again travelling check
	int idCheck;	//
//	bool insufficientBalance;   // to break loop if customer has insufficient balance
	
	int a[10]; 
	
	customer c[10];
	cout << "Store values for database: ";
	for (int i=1; i<3; i++) {
		
		cout << "\n\nEnter custoemr id in numbers: ";
		cin >> c[i].ID;
		cout << "Enter the balance of customer: ";
		cin >> c[i].balance;
	}

	cout << "\nWelcome to Speedo Bus Service\n\n";
	cout << "Enter your customer id: ";
	cin >> idCheck;
	
	for (int i=0; i<3; i++) {
		
		if (idCheck == c[i].ID) {
			
				cout << "\nHow many stops for your travelling: ";
				cin >> stops;
				
				if(stops <= 2) {
					c[i].bill = 20;
					
				}
				else if (stops > 2) {
					stops = stops -2;
					c[i].bill = 20 + 2* stops;
				}
				
				if (c[i].bill < c[i].balance) {
					c[i].balance = c[i].balance - c[i].bill;
					cout << "\nYour bill is: " << c[i].bill;
				}
				else{
					cout << "Insufficient balance";
					break;
				}
				cout << "\nDo you want to Travel again within next 30 mins (Press 0 or 1): ";
				cin >> againTravel;
				if (againTravel == 1) {
					cout << "\nPay 5 and travel unlimited";
					c[i].balance = c[i].balance - 5;
				}
		}
	}
	
	return 0;
}

