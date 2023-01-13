#include <iostream>
using namespace std;



int main () {
	
	cout << "\n################";
	cout << "\nCar Rental";
	cout << "\n################\n\n";
	
	int hour;
	float fee;
	float tax;
	int cars;
	cout << "Enter number of hours: ";
	cin >> hour;
	cout << "Enter number of cars: ";
	cin >> cars;
	
	
	if ( hour >= 1 && hour <= 5) {
		fee = 25 + 0.5 * hour; 
		
	}
	else if ( hour > 5 && hour <= 24) {
		hour = hour -5;
		tax = 0.5 * hour;
		fee = 25 + hour * 5 + tax;
	
		
		if (fee > 120) {
			tax = 0.5 * hour;
			hour = hour - 24;
			fee = 120 + tax;
		}
	}
	else if (hour > 24) {
		int a = hour;
		a = a/24;
		
		cout << a;
		fee = a*110;
		hour = hour % 24;
		fee = fee + hour*5;
	
	}
	
//	system("cls");
	cout << "Cars" <<"		"<< "Hours" << "		" << "Charges" << endl;
	cout << cars <<"		"<< hour << "		" << fee << endl;
	
	
	return 0;
}




