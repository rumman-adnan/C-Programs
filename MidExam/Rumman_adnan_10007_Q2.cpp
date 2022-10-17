#include <iostream>
#include <string.h>

using namespace std;

int main () {
	
	int cnic;
 	const int cnic1= 1111123456789, cnic2= 2222123456789, cnic3= 3333123456789, cnic4= 4444123456789, cnic5= 5555123456789, cnic6= 6666123456789, cnic7= 7777123456789;
 	int countA=0, countB=0, countC=0;
 	char candidateVote, stopSystem;
 	bool validCNIC = false;
	
	cout << "##########################\n";
	cout << "Election Commission System\n";
	cout << "###########################\n\n\n";
	
	
	cout << "Enter your valid CNIC number: ";
	cin >> cnic;
	
	
	
	if ( cnic = cnic1 || cnic == cnic2 || cnic == cnic3 || cnic == cnic4 || cnic == cnic5 || cnic == cnic6 ) {
		
		validCNIC = true;
		
		while (validCNIC) {
			
				cout << "\nChoose one of three candidates\n";
				cout << "1. Candidate, Press A\n";
				cout << "2. Candidate, Press B\n";
				cout << "3. Candidate, Press C \n";
				
				cin >> candidateVote;
				
				switch (candidateVote) {
					case 'A':
						
						countA++;
						
						break;
					case 'B':
						
						countB++;
						
						break;
					case 'C':
						
						countC++;
						
						break; 
					
					default:
						cout << "\nInvalid Vote\n";
				}
				
				system("cls");
		}
	}
	else {
		cout << "Your CNIC is invalid. ";
	}
	
	
	
	
	
  return 0;	
}
