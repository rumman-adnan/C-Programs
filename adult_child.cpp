#include<iostream>
using namespace std;

int main()  {
	
	cout<<"########################" << endl;
	cout<< "Program to detect Child and Adult" <<endl;
	cout<<"########################"<< endl;
	
	int age;
	cout<<"Enter the age= ";
	cin>>age;
	if (age>18) {
		
	cout<<"He is adult" <<endl;
	}
	else {
	
	cout<< "He is child";
	}

	return 0;
}
