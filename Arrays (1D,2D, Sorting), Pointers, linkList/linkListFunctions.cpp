#include <iostream>
using namespace std;

class node{
	public:
		int value;
		node *next;
};

void newNodeInStart(node *head) {
	
	int val;
	cout << "Enter the value for new node: ";
	cin >> val;
	node *n = new node();
	n -> value = val;
	n -> next = head; 
	head = n;
}
void traverseNode(node *head) {
	
	node *temp;
	temp = head;
	while (temp!= NULL) {
		
		cout << temp->value <<'\t';
		temp = temp ->next;
	}	
}



int main () {
	
	node *head = new node();   // create a new space of type node which has no name, only accessible by pointer (head) of type node. This node type ptr save new space of node type. 
	head->next = NULL;
//	cout << &head<< endl;
	int size;
//	cout << head<< endl;
	cout << "How many nodes you want to make: ";
	cin >> size;
	
	
	for (int i =0; i <= size ; i++) {
		
		newNodeInStart(head);
	}
	
	traverseNode(head);
//	deleteNode();
//	deallocateNode();
//	
	
	
	
	return 0;
}
