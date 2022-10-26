#include <iostream>
using namespace std;


void printVal(int a) {
	
	cout << "\n\nInside printVal function: " << endl;
	cout << "original parameter value of 'a': " << a << endl;
	cout << "original address of 'a': " << &a << endl;
	cout << "but now " << endl;
	a = 100;
	cout << "'a' has a value of: " << a << endl;
	cout << "'a' has address of: " << &a << endl;
//	return a;
}

int main () {
	
	int a = 10;
	int &b = a;  // we are creating alias of a, we get to know this by its usage, & gives address where it is located.
	//b is reference (alias) to integer type variable, b is reference towards a, so it store same value in the RAM. 
//	int b =a ;
	cout << "\n\nInside main function " <<endl;
	cout << "'a' has a value of: " << a << endl;
	cout << "'a' has address of: " << &a << endl;
	cout << "'b' has a value of: " << b << endl;
	cout << "'b' has address of: " << &b << endl;
	
	//b = printVal(a); // invoke function, pass by value, we change value of a through outside function.
	
	// printVal(a);
	// When we change type of printVal function and saved it in b, then value of b changed 
	cout << "************************************************\n";
	
	// After printVal function, that value of a is destroyed ()if return type is void), that value is inside the box. now origional value of a prints, it never got changed
	cout << endl << "\nBack inside main function after printVal, a = " << a << endl;
	cout << endl << "Back inside main function after printVal, address of a = " << &a << endl;
	
	return 0;
}
