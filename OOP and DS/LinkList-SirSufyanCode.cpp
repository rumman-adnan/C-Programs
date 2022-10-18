#include<iostream>

using namespace std;

class Node {
public:
	int value;
	Node* next;
};

void main() {
	
	Node * head = new Node();
	head = NULL;

	int v;
	int choice;
	cout << "Enter choice \n1 new node\n2 traverse\n3 delete \n4 delete from value \n5 exit";
	cin >> choice;

	while (choice != 5)
	{
		if (choice == 1)
		{
			
			Node * var = new Node();
			cout << "Enter value\n";
			cin >> v;
			var->value = v;
			var->next = head;
			head = var;

		}

		else if (choice == 2)
		{
			if (head == NULL)
			{
				cout << " Linked List is empty!" << endl;
				
			}
			 Node *temp = head;
			while (temp != NULL)
			{
				cout << temp->value << " ";
				temp = temp->next;
			}
			cout << endl;
			
		}

		else if (choice == 3)
		{
			if (head == NULL) {
				cout << "Linked List is empty!" << endl;
				return;
			}
			cout << head->value << " is removed." << endl;
			head = head->next;
		}
		else if (choice == 4)
		{
			int user;
			cout << "Enter value to delete \n";
			cin >> user;
	
			if (head->value == user)
			{
		
				head = head->next;
	
			}

			else {
				Node * current = head;
				while (current->next != NULL)
				{
					if (current->next->value == user)
					{
		
						current->next = current->next->next;
						break;
					}

					else {
						current = current->next;
					}
				}
			}

		}

		cout << "Enter choice \n1 new node\n2 traverse\n3 delete \n4 delete from value \n5 exit";
		cin >> choice;
	}


	system("pause");
}
