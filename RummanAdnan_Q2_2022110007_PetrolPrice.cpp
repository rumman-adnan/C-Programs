#include<iostream>
using namespace std;

int main()
{
	int liters;   //to store value of input,
	double price;	// to store calculated price
	
	cout<<"########################" << endl;
	cout<< "Program to compute the total bill of petrol" <<endl;
	cout<<"########################"<< endl;
	
	
	cout<<endl <<endl;
	
	cout<<"Enter the how many liters of petrol you need ??"<<endl;
	cin>>liters;
	price =238.56*liters;
	
	cout<<"Your bill is "<<price <<endl;
	
}
