#include <iostream>
using namespace std;


 int x = 10;    // global variable can be accessed anywhere
 				
				 // 
				 	
int sum(int a, int b) {
	
	int x =20;
	
	int result;
	cout << x <<endl;
	result = a+b;
	:: x = 1000;
	return result;
	
	
	
	
}

int main () {
	
	int x = 5;
//	cout << "This the sum: ";
	cout << sum(25,35) <<endl;
	cout << x <<endl;
	
	cout << ::x <<endl;  // access global variable
	::x = 11;  // Change global variable value
	
	cout << ::x;
	
	return 0;
}
