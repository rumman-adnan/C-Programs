#include <iostream>
using namespace std;

int main () {
	int count;
	int end;
	string temp;
	cout << "Enter the number of students: ";
	cin >> count;
	string name[count];
	
	for(int i=0; i<count; i++) {
		
		cout << "Enter the name (" << i << ") : ";
		cin >> name[i];
	}
	//end = count-1;
	for(int i=0; i< (count-1); i++) {
		
		temp = name[i];
		name[i] = name[count-1];
		name[count-1] = temp;
		count--;
		
	}
		
	for(int i=0; i<count; i++) {
		
		
		cout << name[i] << '\t';
	}
	
	return 0;	
}
