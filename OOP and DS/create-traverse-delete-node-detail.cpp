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
cout << "Delete last node, Select 3" << endl;
cout << "Delete the last node with Deallocation, Select 4" << endl;
cout << "Delete specific value from link list, Select 5" << endl;
cout << "Choose any value: " << endl;


cin >> choose;

switch (choose) {

	case '1': {
	
			Node *obj = new Node();
			cout << "Enter any number: ";
			cin >> num;
			obj -> value = num;
			obj ->next = head;
			head = obj;
			
			break;
	}
	
	
	case '2': {
		
			Node *temp;
			temp = head;
			cout << "The link list dynamic elements are as follows: "<< endl;
			while (temp != NULL) {
			cout << temp ->value << '\t';
			temp = temp->next;
			}
	
	break;
	}
	case '3': {
		
	
			head = head->next;
			break;
	}
	case '4': {
		
			Node *temp;
			temp = head;
			head = head ->next;
			delete(temp);
			break;
	}
	case '5' : {
		
		Node *temp;
		cout << "Enter the value which you want to delete from link list: ";
		cin >> num;
		Node *current = head;
		while (current ->next!=NULL) {
			
			while (current->next->value == num) {
				temp = current ->next;
				current ->next = current ->next ->next;
				delete(temp);
			
		}
			
		
			
		}
		
		break;
	}
	
	
	default:  {
	
		cout << " Select Again ";
	}
	}


}





return 0;
}
