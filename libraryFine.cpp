#include <iostream>
using namespace std;


int main(){
	
	int lateDays;
	cout << "Enter the late days: ";
	cin >> lateDays;
	
	if (lateDays >= 30) {
		cout << "Your membership is cancelled"; }
		
	else {
			
			if (lateDays > 10)
			{
				cout << "Your fine is 5 rupee"; 
			}
			else {
				if (lateDays > 5) {
					cout << "Your fine is 1 rupee";
				}
				else
				{
					cout << "Your fine is 50 paisa";
				}
				
			}
			
		}
		return 0;
		
		
	}
	
