#include<iostream>
using namespace std;

int main()
{
	int fraction1_num;   //to store value fraction1 numerator,
	int fraction1_den;   //to store value fraction1 denominator,
	int fraction2_num;   //to store value fraction2 numerator,
	int fraction2_den;   //to store value fraction2 denominator,
	
	double numerator; // to store results
	double denominator; // to store result denominator
	double output_fraction; //to s
	
	
	cout<<"########################" << endl;
	cout<< "Program to Multiply to fractions" <<endl;
	cout<<"########################"<< endl;
	
	
	cout<<endl <<endl;
	
	
	cout<<"Enter first fraction numerator"<<endl;
	cin>>fraction1_num;
	cout<<"Enter first fraction denominator"<<endl;
	cin>>fraction1_den;
	cout<<"Enter second fraction numerator"<<endl;
	cin>>fraction2_num;
	cout<<"Enter second fraction denominator"<<endl;
	cin>>fraction2_den;	
	
	numerator= fraction1_num*fraction2_num;
	denominator= fraction1_den* fraction2_den;
	
	output_fraction=numerator/denominator;
	
	cout <<"Your output in decimal form is" <<numerator<<"/"<<denominator<<endl<<endl;
	
	cout <<"Your output in fractional form is" <<output_fraction;
	
	
	
	
	
}
