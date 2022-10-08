
#include<iostream>
using namespace std;
#include <math.h>

int main()
{
	
	
//	pow(base, exponent) this is our procss, it accepts 2 arguments
	
	double base, exponent;
	double result;
	
	cout<<"########################" << endl;
	cout<< "Power Program" <<endl;
	cout<<"########################"<< endl;
	
	
	cout<< "Enter base number";
	cin>>base;
	cout<< "Enter exponent number";
	cin>>exponent;
	
	result = pow(base,exponent);
	cout<< result;
	
	return 0;
	
}

