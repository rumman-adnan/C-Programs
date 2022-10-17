#include <iostream>
#include <conio.h>
using namespace std;


// dynamically create link list. 

class Node {      //class name should be start with capital letter
	public: 
	
	int value;
	
	Node *next;
};


int main () {
	
	
	char choose;
	int num;
	int v;
	

	Node *head = new Node();     // Dynamic memory Allocation
	
	head = NULL;  // Null itsself is pointer to avoid garbage value
	
	cout << "Select any one choice: \n";
	
	while (1) {
	
	
	cout << "\n\nNew node, Select 1 " << endl;
	cout << "Traverse, Select 2" << endl;	
	cout << "Choose any value: ";
	
	cin >> choose;
	
	switch (choose) {
		
		case '1': {
			
			
			
//			Node *var = new Node();
//			cout << "Enter value: ";
//			cin >> v ;
//			var ->next = head;
//			head =var;
	
				
			Node *obj = new Node();
			cout << "Enter any number: ";
			cin >> num;
			obj -> value;
			obj ->next = head;
			head = obj;
			
			break;
		}
		
		
		case '2': {
			
			
			break;
		}
		
		default:  {
				
				cout << " Select Again ";
		}
	}	
		
		
	}
	
	

	
	
	return 0;
}
