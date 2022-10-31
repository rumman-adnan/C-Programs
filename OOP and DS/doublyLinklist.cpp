#include <iostream>
using namespace std;


class doubly {
	
	public:
		int value;
		doubly *next;
		doubly *prev;
};
int main () {
	
	doubly* head = NULL;     // points to NULL pointer means garbage value.
//	cout << head << endl;  // ox*1 if head is not null, it points to garbage value
//	cout << &head; // address
	
//	cout << head ->next;
//	cout << head ->value;
	doubly* obj = new doubly();
	
	obj ->value = 10;
	obj ->next = NULL;
	obj ->prev = NULL;
	head = obj;
	cout << obj << endl;

	cout << head << endl;
//	
//	cout << &obj ->value << endl;
//	cout << &head ->value << endl;
	
	doubly* obj1 = new doubly();
	obj1 ->prev = NULL;
	obj1 ->next = obj;
	
	cout << obj1 << endl;
	
	cout << obj1 -> next;
	return 0;
}
