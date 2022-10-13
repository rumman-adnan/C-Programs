#include <iostream>

using namespace std;


int main () {
	
	
	const int morningGuardRfid1 = 1111, morningGuardRfid2 = 2222, eveningGuardRfid1 = 3333, eveningGuardRfid2 = 4444;
	const int morningGuardPin1 = 0011, morningGuardPin2 = 0022, eveningGuardPin1 = 0033, eveningGuardPin2 = 0044;
	
	float breakStartTimeHours, breakStartTimeMinutes, breakReturnTimeHours, breakReturnTimeMinutes, breakStartTime, breakReturnTime;
	float breakDuration;

	float timeInGuardMorning1, timeOutGuardMorning1;
	bool morningGuard1Present = false;
	
	float timeInGuardMorning2, timeOutGuardMorning2;
	bool morningGuard2Present = false;
	
	float timeInGuardEvening1, timeOutGuardEvening1;
	bool eveningGuard1Present = false;
	
	float timeInGuardEvening2, timeOutGuardEvening2;	
	bool eveningGuard2Present = false;
	
	
	int rfid, pin;
	
	
	
	breakStartTime = 0;
	cout << "Enter Your Break Start Time: ";
	cout << "Enter Hours: ";
	cin >> breakStartTimeHours;
	cout << "Enter Your Minutes: ";
	cin >> breakStartTimeMinutes;
	breakStartTime = breakStartTimeHours + breakStartTimeMinutes / 60.0;
	
	
	
	breakReturnTime = 0;
	cout << "\nEnter Your Break Return Time: ";
	cout << "\nEnter Hours: ";
	cin >> breakReturnTimeHours;
	cout << "\nEnter Your Minutes: ";
	cin >> breakReturnTimeMinutes;
	breakReturnTime = breakReturnTimeHours + breakReturnTimeMinutes / 60.0;
	
	breakDuration = breakReturnTime - breakStartTime;
	cout << breakDuration <<endl;
	if (breakDuration >= 0.45) {
//		guardViolations++;
		cout << "You violated rule, Be careful next time";
	}
	
	
	
	
	cout << "\nEnter Your Employee RFID: ";
	cin >> rfid;
	
	cout << "\nEnter Your PIN: ";
	cin >> pin;
	
	
	if (rfid == morningGuardRfid1 && pin == morningGuardPin1) {
		morningGuard1Present = true;
		cout << "guard1 on duty" <<endl;
	}
	
	else if (rfid == morningGuardRfid2 && pin == morningGuardPin2) {
		morningGuard2Present = true;
	}
	
	else if (rfid == eveningGuardRfid1 && pin == morningGuardPin1) {
		eveningGuard1Present = true;
	}
	
	else if (rfid == eveningGuardRfid2 && pin == eveningGuardPin2) {
		eveningGuard2Present = true;
	}
	
	else {
		cout << "Invalid RFID or PIN";
	}
}
