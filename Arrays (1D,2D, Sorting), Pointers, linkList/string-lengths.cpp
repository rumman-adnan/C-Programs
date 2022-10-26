#include <iostream>
#include <string.h>
using namespace std;

int main() {
	
	
	int val = 42;
	int val2 = 41;
	
	const int *intPtr = &val;

	intPtr = &val2;
	
	cout << &val<< endl;
	cout << intPtr<<endl;  // intPtr points to val
	
	cout << &intPtr<<endl;
	
	cout << *intPtr;
	
	
//	char str[ ] = "Hello";
//	char str1[ ] = "Rumman ";
//	char str2[ ] = "Adnan";
//	int len1, len2;
//	len1 = strlen (str);
//	len2 = strlen ( "Good Luck" );
//	cout<< "Length of string 1 is: "<<len1<<endl<<
//	"Length of string 2 is: "<<len2;
//	
//	strcat (str1, str2);
//	cout <<str1;

}
