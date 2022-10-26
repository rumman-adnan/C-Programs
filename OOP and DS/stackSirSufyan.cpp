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
			cout << number[top--] << endl;   // always use post fix in pop.
		}
		 
	}
};

int main() {
	
	Itm student;
	student.push(1);
	student.push(2);
	student.push(3);
	student.push(4);
	student.push(5);
	student.push(6);
	student.push(5);  // This can not be added because memory is full
	student.pop();
	
	system("pause");
	
	return 0;
}
