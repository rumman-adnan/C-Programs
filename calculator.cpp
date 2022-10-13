#include <iostream>
using namespace std;

int main () {
	
	int num1, num2;
	float output;
	char input;
	
	cout << "#########################\n";
	cout << "   Calculator Functions\n";
	cout << "#########################\n\n";
	
	
	cout << "\n\nEnter the first number: ";
	cin >> num1;

	cout << "Enter the second number: ";
	cin >> num2;
		
	cout << "\nEnter any one operator ( +, -, *, / ) : ";
//	getchar(input);
	cin >> input;
	
	switch (input) {
		
		case '+':
			output = num1 + num2;
			break;
			
		case '-':
			output = num1 - num2;
			break;
			
		case '*':
			output = num1 * num2;
			break;
		
		case '/':
			output = num1 / num2;
			break;
	}
	
	cout << "\n\nYour output is: " << output;
	
	
	return 0;
}
