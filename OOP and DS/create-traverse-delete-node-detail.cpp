#include <iostream>
#include <stdlib.h>
//#include <conio.h>
using namespace std;


class Node {
	public: 
	int value;
	Node *next;
};


int main () {
	
	char choice;
	int num;
	int val;
	Node *head = new Node();
	head = NULL;
	
	
	
	while (1) {
		
		system("CLS");
		cout << "#########################################\n";
		cout << "Dynamic Allocation of Nodes in Link List\n";
		cout << "#########################################\n\n";
			
		cout << "\n\nFor New node, Select 1 " << endl;
		cout << "\nTo Traverse th nodes, Select 2" << endl;
		cout << "\nTo Delete last node, Select 3" << endl;
		cout << "\nDelete the last node and De-Allocate, Select 4" << endl;
		cout << "\nDelete specific value from link list, Select 5" << endl;
		cout << "\n\nYour Choice: ";
		cin >>choice;
		
		switch (choice) {
			
			case '1': {
				Node *obj = new Node();
				cout << "\n\nEnter number: ";
				cin >> num;
				obj -> value = num;
				obj -> next = head; // As head points to NULL, so obj points to NULL, now obj is last node. 
				head = obj;     //Now here head is storing address of obj 
				break;
			}
			
			case '2': {
				
				Node *temp; // No dynamic allocation, just for traversal
				temp = head;
				cout << "The link list dynamic elements are: ";
				while (temp != NULL) {
					
					cout << temp -> value << '\t';
					temp = temp -> next;
				}
				int addingNodes;
				cout << "\nPress 1 for main menu: ";
				cin >>addingNodes;	
				if (addingNodes =1) {
				break;
				}		
			}
			
			case '3': {
				
				head = head -> next;
				break;
			} 
			case '4': {
				
				Node *temp;
				temp = head;
				head = head -> next;
				delete (temp);
				break;
			}
			
			case '5': {
				
				Node *temp = head;
				Node *current = head;
				cout << "\n\nEnter number which you want to delete: ";
				cin >> val;
				
				while (current -> next -> value == val ) {
					
					temp = current -> next;
					current ->next = current -> next -> next;
				}
				delete(temp);
				
				break;
			}
		
		
		
		
		}
		
		
	}
	
	return 0;
}
