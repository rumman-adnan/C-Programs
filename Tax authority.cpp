#include <iostream>
using namespace std;

int main () {
	
	int monthlyDivQuantityends;
	int employeeQuantity;
	int productQuantity1, productQuantity2, productQuantity3;
	int product1Price, product2Price, product3Price;
	int divQuantityendTax, gstCollected, totalTax;
	float totalPrice;

	
	cout << "########################\n";
	cout << "Tax Authority Calculator  \n";
	cout << "########################\n\n";
	
	
	for (int i = 1; i <= 12; i++) {
		
		cout << "Enter the divQuantityend for "<< i << " month: ";
		cin >> monthlyDivQuantityends;
		divQuantityendTax += (monthlyDivQuantityends)*0.15;
	}
	

		cout << "\nHow many quantities sold for first product: ";
		cin >> productQuantity1;
		cout << "\nEnter the price for first product: ";
		cin >>product1Price;
		totalPrice = product1Price * productQuantity1;
		gstCollected += totalPrice*0.175;
		
		cout << "\nHow many quantities sold for second product: ";
		cin >> productQuantity2;
		cout << "\nEnter the price for second product: ";
		cin >>product2Price;
		totalPrice = product2Price * productQuantity2;
		gstCollected += totalPrice*0.175;
		
		cout << "\nHow many quantities sold for third product: ";
		cin >> productQuantity3;
		cout << "\nEnter the price for third product: ";
		cin >>product3Price;
		totalPrice = product3Price * productQuantity3;
		gstCollected += totalPrice*0.175;
	
	

	
	cout << gstCollected;
	
return 0;	
}
