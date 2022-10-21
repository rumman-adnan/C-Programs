#include <iostream>
using namespace std;


int printVal(int a) {
	
	cout << "\n\nInside printVal function: " << endl;
	cout << "original parameter value of 'a': " << a << endl;
	cout << "original address of 'a': " << &a << endl;
	cout << "but now " << endl;
	a = 100;
	cout << "'a' has a value of: " << a << endl;
	cout << "'a' has address of: " << &a << endl;
	return a;
}

int main () {
	
	int a = 10;
	int &b = a;  // we are creating alias of a, we get to know this by its usage, & gives address where it is located.
	//b is reference (alias) to integer type variable, b is reference towards a, so it store same value in the RAM. 
//	int b =a ;
	int* ptrA = &a; //integer walo ka pointer. pointer is going to hold address of a.
	int* ptrB = &b; //where integer address can be stored, 
	int * loc = new int(200); // dynamic memory allocation, this pointer may be ponting to null, or anything but we give him access to new integer of space 200.
	// the only way we access this new location is through this pointer, no variable name till now. 
	
	cout << "value of 'loc' is: " << loc << endl;   // address of new location
	cout << "location of 'loc' is " << &loc << endl; // loc itsself address
	delete loc;
	
	cout << "\n\nInside main function " <<endl;
	cout << "'a' has a value of: " << a << endl;
	cout << "'a' has address of: " << &a << endl;
	cout << "ptrA points to: " << ptrA <<endl;
	cout << "ptrA point to address that contains value of : " << *ptrA << endl; // talk about value where pointer is pointing to, this is de referencing. 
	cout << "'b' has a value of: " << b << endl;
	cout << "'b' has address of: " << &b << endl;
	cout << "ptrB points to: " << ptrB <<endl;
	cout << "ptrB point to address that contains value of : " << *ptrB << endl;
	
	b = printVal(a); // invoke function, pass by value, we change value of a through outside function.
	
	
	// When we change type of printVal function and saved it in b, then value of b changed 
	cout << "************************************************\n";
	
	// After printVal function, that value of a is destroyed, that value is inside the box. now origional value of a prints, it never got changed
	cout << endl << "\nBack inside main function after printVal, a = " << a << endl;
	cout << endl << "Back inside main function after printVal, address of a = " << &a << endl;
	
	return 0;
}
