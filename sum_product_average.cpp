#include<iostream>

using namespace std;

int main(){
	
//	VAR sum, userNum1, userNum2, userNum3;
	int sum, product, userNum1, userNum2, userNum3;
	float avg;
	cout<< "Enter the first number:";
	cin>>userNum1;
	
	cout<< "Enter the second number:";
	cin>>userNum2;
	cout<< "Enter the third number:";
	cin>>userNum3;
	
	sum = userNum1+ userNum2+ userNum3;
	avg =sum/3.0;
	product = userNum1*userNum2*userNum3;
	 
	cout<<"\nSum: "<<sum;
	cout<<"\nProduct: "<<product;
	cout<<"\nAverage:"<<avg;
	return 0;
}
