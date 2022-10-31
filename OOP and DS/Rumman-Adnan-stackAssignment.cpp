#include <iostream>
using namespace std;

class Itm
{
public:
	int top = -1;
	int number[5];   //We need 5 locations, number[5] give 6 locations, 
	
	// We make stack through classes otherwise we can make it with functions, because we can not allow others to access data, normal user can not access it, data security
	
	void push(int x)
	{
		if (top < 5)
		{
			number[++top] = x;  // we can use top = top+1 OR top++
		}
		else
		{
			cout << "stack is full ";
		}
	}
	int pop()
	{
		if (top<0) 
		{
			cout  << "Stack is empty \n";
		}
		else 
		{
			return number[top--];   // always use post fix in pop.
		}
		 
	}
	void print() {
		cout << endl << endl;
		for(int i=top; i>-1; i--) {     // for reverse loop, size should be declared -1 in start.
			cout << number[i] << " ";
		}
	}
	
	
// i =top, i>-1, i--
	
};

int main() {
	
	cout << "#########################\n";
	cout << "Welcome to learning Stack\n";
	cout << "#########################\n";
	
	Itm student;
	int a;
	int counter =0;
	
	Itm temp;
	int num;
	cout << "\n\nEnter the number which you want to search: ";
	cin >> num;
	student.push(11);
	student.push(22);
	student.push(33);
	student.push(44);
	student.push(55);
	student.push(66);
//	student.pop();
//	student.push(5);  // This can not be added because memory is full
	
	cout << "\n\nOriginal Stack: ";
	student.print();
	
	for (int i=student.top; i>-1; i--) {
		if (num == student.number[i] ) {
			student.pop();
			break;
		}
		else {
			temp.push(student.pop());
			counter++;
		
		}
	}
	cout << "\n\n Temporary Stack: ";
	temp.print();
	for (int i=0; i<counter; i++) {
			student.push(temp.pop());
	}
	
	
	

	cout << "\n\nAgain Original Stack: ";
	student.print();
	return 0;
}
