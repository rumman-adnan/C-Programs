#include <iostream>
#include<stdlib.h> 

using namespace std;

int main () {
	
	
	int guardPIN, guardBreaktime, guardViolations, guardShift;
	char guardBreak;
	
	cout << "####################################\n";
	cout << "  Portal Design for Security Staff\n";
	cout << "####################################\n\n\n";
	
	cout << "\nDo you need break, you have to return within 45 mins (Y/N): ";
	cin >> guardBreak;
	
	if (guardBreak == 'Y' || guardBreak == 'y') {
		cout << "\nKindly swipe RFID card and Enter your PIN number: ";
		cin >> guardPIN;
	}
	
	cout << "Enter the return time of guard: "
	
	if (guardBreaktime >= 45 || guardPIN ==0 || 0) {
		guardViolations++;
		
	if (guardViolations == 1)	{
		
		cout << "\nYou violate the rule, This is your warning for last time." <<endl;
	}	
	if (guardViolations == 2)	{
		
		cout << "\nYou are fired. " <<endl;
	} 
	}
	
	
	
	
 return 0;	
}
