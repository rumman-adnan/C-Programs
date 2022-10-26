#include <iostream>
using namespace std;


float sum (int num1, int num2) {  // here num1 and num2 store values through positional mapping, a and b value just copy paste in function parameters.
	return num1+num2;				// it does not change b, it copy paste b value
}								// float sum (int num1=10, int num2=10) takes defeault values in case of absence of parameters in main
int main () {

//	Call by value---------------------------------------
	int a = 5, b = 6;
	cout << sum(a,b);  // this means copy paste of a,b values in num1 and num2 box. If we want same box instead of copy paste, then its reference call, so less space required
//	Call by reference---------------------------------------
	
	
//	int *x=a; //It can not run, because pointer only store address (hexa value). or we can store hex value in a. 
//	int &x = a; // Reference/ alias, it does not have its own address. alternate name of calling same box.	
	int* x1 = &a;  // pointer
	// In reference call we do not have create extra boxesin function parametrs, instead we send same box in fucntion parameters.
	// we need to access these 2 main boxes of a,b directly. so we have t ouse pointer. Dereference pointer to access value
	// 2 mechanisms  *ptrA, int &B
	// we can access whole array using pointer. array resides in ram, it has address also. 
	
//-------------Use ptr to access array
int arr[] = {11,22,33}; // arr location is actually pointer that points to array index 
// array square brackets is also dereference operator. 
// static array only works till it is run with main. at the end of program. in dynamic array we use it and return it after use before end of program
// changing size of static or dynamic array is not possible. in dynamic array space is deallocated during run time. array elements is like tray. arranged side by side
// link list is different from array, randomly allocated space, can grow unlike array
// treat variable name of array as a pointer, it points to very first box of array
	
	return 0;
}
