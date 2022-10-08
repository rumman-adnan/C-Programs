
#include<iostream>
using namespace std;

int main()
{
	int value1;   //variable means start with garbage value, no null required,
	int value2;
	int temp;
	cout<<"########################" << endl;
	cout<< "Program for Swapping of two variables" <<endl;
	cout<<"########################"<< endl;
	
	
	cout<<endl <<endl;
	
	cout<<"Enter the first variable";
	cin>> value1;
	
	cout<<"Enter the second variable";
    cin>> value2;
	
	temp=value1;
	value1=value2;
	value2=temp;
	cout<<endl <<endl;
	
	cout<< "The value of first variable is" <<value1<< endl;
	cout<< "The value of second variable is"<< value2<< endl;
	
}
	
	
