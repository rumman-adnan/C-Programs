#include <iostream>

using namespace std;

int main () {
	
	
	int size1 = 5;
	int number1[size1] ={};  //When you write empty brackets {}, then compiler automatically initialize it with zero.
	    
	int number2[] = {1,3,4,8,5,10,15,14};
	
	int number3[8] = { 1,5,8 };

	

	cout << "\n\nEnter input numbers: \n";
	for (int i=0; i<=size1; i++) {
		
		cin >> number1[i];
	}
	
	cout << "\nThe output numbers are: \n";
	
	
	
	for (int i=0; i<=size1 ; i++) {
		
		cout << number1[size1-i]<<endl;
	}

//	cout << sizeof(number2);
return 0;
	
}
