#include<iostream>
#include<stdlib.h>
#include<conio.h>


using namespace std;

int main() {
	
	const int pinGuard1 = 11, pinGuard2 = 22, pinGuard3 = 33, pinGuard4 = 44, breakLimit = 45; 
	
	int guardPin = 0, breakTimeGuard1 = 0, totalBreakGuard1 = 0, breakTimeGuard2 = 0, totalBreakGuard2 = 0;
	int breakTimeGuard3 = 0, totalBreakGuard3 = 0, breakTimeGuard4 = 0, totalBreakGuard4 = 0;
	char shift, guardChoice, adminChoice, ch;
	bool endShift = false, pVRGuard1 = false, pVRGuard2 = false, pVRGuard3 = false, pVRGuard4 = false;
	bool breakGuard1 = false, breakGuard2 = false, breakGuard3 = false, breakGuard4 = false;
	bool markGuard1 = false, markGuard2 = false, markGuard3 = false, markGuard4 = false;
	bool violationGuard1 = false, violationGuard2 = false, violationGuard3 = false, violationGuard4 = false;
	
	
	do {
	system("cls");
	
	cout << "#########################\n";
	cout << "Portal for security staff\n";
	cout << "#########################\n";
	
	cout << "Input panel for Directorate\n";
	cout << "Do you want to enter previous history of violations? (Y/N): ";
	
	cin >> adminChoice;
	
	if (adminChoice == 'Y' || adminChoice == 'y') {
	
		cout << "\nEnter Guard Pin number\n";
		
		cin >> guardPin;
		
		switch (guardPin) {
			case pinGuard1:
				cout << "\nPrevious violation Record? (Y/N): ";
				cin >> ch;
				if (ch == 'Y' || ch == 'y')
					pVRGuard1 = true;
				
				break;
			case pinGuard2:
				cout << "\nPrevious violation Record? (Y/N): ";
				cin >> ch;
				if (ch == 'Y' || ch == 'y')
					pVRGuard2 = true;
				
				break;
			case pinGuard3:
				cout << "\nPrevious violation Record? (Y/N): ";
				cin >> ch;
				if (ch == 'Y' || ch == 'y')
					pVRGuard3 = true;
				
				break;
			case pinGuard4:
				cout << "\nPrevious violation Record? (Y/N): ";
				cin >> ch;
				if (ch == 'Y' || ch == 'y')
					pVRGuard4 = true;
				
				break;
			default:
				cout << "\nInvalid Pin number\n";
		}
	
	}
	else {
		cout << "\nThank you for entering data\n";
		cout << "\nPress any key to continue . . .\n";
					getch();
					
		
	}
}while(adminChoice == 'Y' || adminChoice == 'y');
	system("cls");
	
	cout << "#########################\n";
	cout << "Portal for security staff\n";
	cout << "#########################\n";
	
	cout << "\nEnter Shift Time\n 1. Day Time (D)\n 2. Night Time (N)\n";
	cin >> shift;
	
	if (shift == 'D' || shift == 'd') {
	system("cls");
	
	cout << "#########################\n";
	cout << "Portal for security staff\n";
	cout << "#########################\n";
	
		
		cout << "\nGuard 1 and Guard 2 On Duty\n";
		cout << "\nGuard 3 and Guard 4 Off Duty\n";
		markGuard1 = true;
		markGuard2 = true;
		markGuard3 = false;
		markGuard4 = false;
		
		
		while (!endShift) {
			
			cout << "\nStaff Attendance System\n";
			cout << "1. Mark Attendance for next shift guards. Press 1\n";
			cout << "2. Signoff duty current guards? Press 2\n";
			cout << "3. Do you want to take a break? Press 3\n";
			cout << "4. Do you want to end a break? Press 4\n";
			cout << "5. End Shift and End Attendance System? Press 5\n";
			cout << "6. Display Warning or firing letters from directorate. Press 6\n";
			
			cin >> guardChoice;
			
			switch (guardChoice) {
				
				case '1':
					cout << "\nMark Attendance\n";
					cout << "Attendance Marked for next duty guards!!\n";
							markGuard3 = true;
							markGuard4 = true;
							cout << "\nPress any key to continue . . .\n";
					getch();
					
					break;
				case '2':
					cout << "\nDuty Signedoff for current guards\n";
							markGuard1 = false;
							markGuard2 = false;
							if (!markGuard3 && !markGuard3){
								violationGuard1 = true;
								violationGuard2 = true;
								
							}
							
							cout << "\nPress any key to continue . . .\n";
					getch();
					
					break;
				case '3':
					if (!markGuard1 && !markGuard2) {
						cout << "\nInvalid Action: You are signed off from duty\n";
								cout << "\nPress any key to continue . . .\n";
					getch();
						break;
					}
					cout << "\nBreak Time Start\n";
					cout << "Swipe RFID card and Enter PIN number\n";
					cin >> guardPin;
					switch (guardPin) {
						case pinGuard1:
							cout << "Enter break time\n";
							cin >> breakTimeGuard1;
							totalBreakGuard1 = totalBreakGuard1 + breakTimeGuard1;
							breakGuard1 = true;
							break;
						case pinGuard2:
							cout << "Enter break time\n";
							cin >> breakTimeGuard2;
							totalBreakGuard2 = totalBreakGuard2 + breakTimeGuard2;
							breakGuard2 = true;
							break;
						default:
						cout << "\nInvalid Pin!!\n";	
					}
					cout << "\nPress any key to continue . . .\n";
					getch();
					 
					break;
				case '4':
								if (!markGuard1 && !markGuard2) {
						cout << "\nInvalid Action: You are signed off from duty\n";
						cout << "\nPress any key to continue . . .\n";
					getch();
						break;
					}
					cout << "\nBreak Time End\n";
					cout << "Swipe RFID card and Enter PIN number\n";
					cin >> guardPin;
					switch (guardPin) {
						case pinGuard1:
							breakGuard1 = false;
							break;
						case pinGuard2:
							breakGuard2 = false;
							break;
						default:
						cout << "\nInvalid Pin!!\n";	
					}
					cout << "\nPress any key to continue . . .\n";
					getch();
					
					break;
				case '5':
					cout << "\nEnd Shift\n";
					endShift = true;
					cout << "\nPress any key to continue . . .\n";
					getch();
					
					break;
				case '6':
					cout << "\nNotifications from directorate\n";
					if (breakGuard1 && breakGuard2) {
					
					violationGuard1 = true;
					violationGuard2 = true;
					cout << "\nYou Have taken the break simultaneously\n";
					
				}
					if (totalBreakGuard1 > breakLimit) {
					cout << "\nYou Have taken the break more than time limit\n";
					
					violationGuard1 = true;
				}
					if (totalBreakGuard2 > breakLimit){
					cout << "\nYou Have taken the break more than time limit\n";
					
					violationGuard2 = true;
				}
					if (!markGuard1 && !markGuard2 && !markGuard3 && !markGuard4) {
					
					violationGuard1 = true;
					violationGuard2 = true;
					cout << "\nYou Have Signed off duty without confirming next shift guards attendance\n";
				
				}
					if (pVRGuard1 && violationGuard1)
					cout << "\nGuard1: You are fired for repeating the violation\n";
					if (!pVRGuard1 && violationGuard1)
					cout << "\nGuard1: Warning Message\n";
					if (pVRGuard2 && violationGuard2)
					cout << "\nGuard2: You are fired for repeating the violation\n";
					if (!pVRGuard2 && violationGuard2)
					cout << "\nGuard2: Warning Message\n";
					
					if (!violationGuard1)
					cout << "\nGuard1: No violation recorded\n";
					if (!violationGuard2)
					cout << "\nGuard2: No violation recorded\n";
					
					
						
					cout << "\nPress any key to continue . . .\n";
					getch();
					
					break;
				default:
					cout << "\nInvalid Input!!\n";	
			}
			
			system("cls");
			
			cout << "#########################\n";
			cout << "Portal for security staff\n";
			cout << "#########################\n";
			
		}
		}
	
	else if (shift == 'N' || shift == 'n') {
		system("cls");
	
	cout << "#########################\n";
	cout << "Portal for security staff\n";
	cout << "#########################\n";
	
		
		cout << "\nGuard 3 and Guard 4 On Duty\n";
		cout << "\nGuard 1 and Guard 2 Off Duty\n";
		markGuard1 = false;
		markGuard2 = false;
		markGuard3 = true;
		markGuard4 = true;
		
		
		while (!endShift) {
			
			cout << "\nStaff Attendance System\n";
			cout << "1. Mark Attendance for next shift guards. Press 1\n";
			cout << "2. Signoff duty current guards? Press 2\n";
			cout << "3. Do you want to take a break? Press 3\n";
			cout << "4. Do you want to end a break? Press 4\n";
			cout << "5. End Shift and End Attendance System? Press 5\n";
			cout << "6. Display Warning or firing letters from directorate. Press 6\n";
			
			cin >> guardChoice;
			
			switch (guardChoice) {
				
				case '1':
					cout << "\nMark Attendance\n";
					cout << "Attendance Marked for next duty guards!!\n";
							markGuard1 = true;
							markGuard2 = true;
							cout << "\nPress any key to continue . . .\n";
					getch();
					
					break;
				case '2':
					cout << "\nDuty Signedoff for current guards\n";
							markGuard3 = false;
							markGuard4 = false;
							if (!markGuard1 && !markGuard2){
								violationGuard3 = true;
								violationGuard4 = true;
								
							}
							
							cout << "\nPress any key to continue . . .\n";
					getch();
					
					break;
				case '3':
					if (!markGuard3 && !markGuard4) {
						cout << "\nInvalid Action: You are signed off from duty\n";
								cout << "\nPress any key to continue . . .\n";
					getch();
						break;
					}
					cout << "\nBreak Time Start\n";
					cout << "Swipe RFID card and Enter PIN number\n";
					cin >> guardPin;
					switch (guardPin) {
						case pinGuard3:
							cout << "Enter break time\n";
							cin >> breakTimeGuard3;
							totalBreakGuard3 = totalBreakGuard3 + breakTimeGuard3;
							breakGuard3 = true;
							break;
						case pinGuard4:
							cout << "Enter break time\n";
							cin >> breakTimeGuard4;
							totalBreakGuard4 = totalBreakGuard4 + breakTimeGuard4;
							breakGuard4 = true;
							break;
						default:
						cout << "\nInvalid Pin!!\n";	
					}
					cout << "\nPress any key to continue . . .\n";
					getch();
					 
					break;
				case '4':
								if (!markGuard3 && !markGuard4) {
						cout << "\nInvalid Action: You are signed off from duty\n";
						cout << "\nPress any key to continue . . .\n";
					getch();
						break;
					}
					cout << "\nBreak Time End\n";
					cout << "Swipe RFID card and Enter PIN number\n";
					cin >> guardPin;
					switch (guardPin) {
						case pinGuard3:
							breakGuard3 = false;
							break;
						case pinGuard4:
							breakGuard4 = false;
							break;
						default:
						cout << "\nInvalid Pin!!\n";	
					}
					cout << "\nPress any key to continue . . .\n";
					getch();
					
					break;
				case '5':
					cout << "\nEnd Shift\n";
					endShift = true;
					cout << "\nPress any key to continue . . .\n";
					getch();
					
					break;
				case '6':
					cout << "\nNotifications from directorate\n";
					if (breakGuard3 && breakGuard4) {
					
					violationGuard3 = true;
					violationGuard4 = true;
					cout << "\nYou Have taken the break simultaneously\n";
					
				}
					if (totalBreakGuard3 > breakLimit) {
					cout << "\nYou Have taken the break more than time limit\n";
					
					violationGuard3 = true;
				}
					if (totalBreakGuard4 > breakLimit){
					cout << "\nYou Have taken the break more than time limit\n";
					
					violationGuard4 = true;
				}
					if (!markGuard3 && !markGuard4 && !markGuard1 && !markGuard2) {
					
					violationGuard3 = true;
					violationGuard4 = true;
					cout << "\nYou Have Signed off duty without confirming next shift guards attendance\n";
				
				}
					if (pVRGuard3 && violationGuard3)
					cout << "\nGuard3: You are fired for repeating the violation\n";
					if (!pVRGuard3 && violationGuard3)
					cout << "\nGuard3: Warning Message\n";
					if (pVRGuard4 && violationGuard4)
					cout << "\nGuard4: You are fired for repeating the violation\n";
					if (!pVRGuard4 && violationGuard4)
					cout << "\nGuard4: Warning Message\n";
					
					if (!violationGuard3)
					cout << "\nGuard3: No violation recorded\n";
					if (!violationGuard4)
					cout << "\nGuard4: No violation recorded\n";
					
					
						
					cout << "\nPress any key to continue . . .\n";
					getch();
					
					break;
				default:
					cout << "\nInvalid Input!!\n";	
			}
			
			system("cls");
			
			cout << "#########################\n";
			cout << "Portal for security staff\n";
			cout << "#########################\n";
			
		}
	
		
	}
	else
	{
		cout << "\nInvalid Input\n";
		cout << "\nPress any key to continue . . .\n";
		getch();
	}
	
	system("cls");
	
	cout << "#########################\n";
	cout << "Portal for security staff\n";
	cout << "#########################\n";
	
	cout << "We are out of attendance system. Thank you!!\n";
	
	return 0;
}
