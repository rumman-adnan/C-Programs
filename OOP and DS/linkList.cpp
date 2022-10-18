#include <iostream>
using namespace std;

// simple singly created link list, no dynamic allocation. 


class Node {      //class name should be start with capital letter
	public: 
	
	int value;
	
	Node *ptr;
};

int main () {
	
	Node head;
	Node nd1;
	Node nd2;
	Node nd3;
	Node nd4;
	Node nd5;
	Node nd6;
	Node nd7;
	
	head.value = 0.1;
	nd1.value = 1;
	nd2.value = 2;
	nd3.value = 3;
	nd4.value = 4;
	nd5.value = 5;
	nd6.value = 6;
	nd7.value = 7;
	//nd8.value = 8;
	

	head.ptr = &nd1;
	nd1.ptr = &nd2;
	nd2.ptr = &nd3;
	nd3.ptr = &nd4;
	nd4.ptr = &nd5;
	nd6.ptr = &nd7;
	nd7.ptr = NULL;
	
	cout << "\nHead value: " <<endl;
	cout << head.value <<endl;
	cout << head.ptr<< endl;
		
	cout << "\nNode 1 value: " <<endl;
	cout << nd1.value <<endl;
	cout << nd1.ptr<< endl;

	cout << "\nNode 2 value: " <<endl;
	cout << nd2.value <<endl;
	cout << nd2.ptr<< endl;
	
	cout << "\nNode 3 value: " <<endl;
	cout << nd3.value <<endl;
	cout << nd3.ptr<< endl;
	
	cout << "\nNode 4 value: " <<endl;
	cout << nd4.value <<endl;
	cout << nd4.ptr<< endl;
	
	cout << "\nNode 5 value: " <<endl;
	cout << nd5.value <<endl;
	cout << nd5.ptr<< endl;
	
	cout << "\nNode 6 value: " <<endl;
	cout << nd6.value <<endl;
	cout << nd6.ptr<< endl;	
	
	Node *temp;
	
	temp = &head;
	
	while (temp != NULL) {
		cout << temp -> value <<endl;
		temp = temp -> ptr;
	}
		
	
	
	
	
	return 0;
}
