#include<iostream>
using namespace std;

int main()
{
	int money_pkr;   //to store value of input in rupees,
	double USD_price;	// to store calculated price
	double poundSterling_price; // to store calculated price
	double euro_price; // to store calculated price
	cout<<"########################" << endl;
	cout<< "Program for currency exchange converter" <<endl;
	cout<<"########################"<< endl;
	
	
	cout<<endl <<endl;
	
	cout<<" Enter the amount in pakistani rupees: "<<endl;
	cin>> money_pkr;
	
	USD_price= money_pkr* 0.0042;
	poundSterling_price= money_pkr * 0.0038;
	euro_price = money_pkr * 0.0043;
	
	
	cout<<" Amount in US dollars is: "<< USD_price<<endl<<endl;
	cout<<" Amount in pounds sterling is: "<< poundSterling_price <<endl<<endl;
	cout<<" Amount in euro is: "<<euro_price<<endl<<endl;
	
}
	
