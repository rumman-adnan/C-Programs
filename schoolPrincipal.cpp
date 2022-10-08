#include<iostream>
#include<stdlib.h>
//#include<chrono>
//#include<thread>
#include<windows.h>

using namespace std;

int main() {
	
	bool moreStudentsPresent = true;
//	char moreStudentsPresent;
	char continuationChoice;
	float engMarks,mathMarks,phyMarks,chemMarks,bioMarks;
	float engMarksSum =0,mathMarksSum =0,phyMarksSum =0,chemMarksSum =0,bioMarksSum =0;
	int studentCount = 0;
	
	
	
	
		
	while(moreStudentsPresent) {
		
		system("CLS");
		
		cout << "######################\n";
		cout << "Student Marks Analyzer\n";
		cout << "######################\n\n";
		
		
		cout << "Marks Entry Form: \n";
		cout << "*****************\n\n";
		
		
		studentCount++;
		
		cout << "  Student #: " << studentCount << endl << endl;
		
		cout << "  Enter English Persentage Marks: ";
		cin >> engMarks;
		engMarksSum += engMarks;
		
		cout << "  Enter Math Persentage Marks: ";
		cin >> mathMarks;
		mathMarksSum += mathMarks;
		
		cout << "  Enter Physics Persentage Marks: ";
		cin >> phyMarks;
		phyMarksSum += phyMarks;
		
		cout << "  Enter Chemistry Persentage Marks: ";
		cin >> chemMarks;
		chemMarksSum += chemMarks;
		
		cout << "  Enter Biology Persentage Marks: ";
		cin >> bioMarks;
		bioMarksSum += bioMarks;
		
		
		cout << "\n\n-----------------------------------------\n\n";
		cout << "\n\Are there any more students? (Y / N) ";
		cin >> continuationChoice;
		
		if (continuationChoice == 'N' || continuationChoice == 'n')
		{ 
			moreStudentsPresent = false;
		}
	}
	
	system("CLS");
	
	cout << "######################\n";
	cout << "Student Marks Analyzer\n";
	cout << "######################\n\n";

 	cout << "Class Average Per Subject\n";
	cout << "*************************\n\n";
	
	cout << "\n Average English Marks: " << engMarksSum / studentCount << "%";
	cout << "\n Average Math Marks: " << mathMarksSum / studentCount << "%";
	cout << "\n Average Physics Marks: " << phyMarksSum / studentCount << "%";
	cout << "\n Average Chemistry Marks: " << chemMarksSum / studentCount << "%";
	cout << "\n Average Biology Marks: " << bioMarksSum / studentCount << "%";
	
//	sleep(3000);
	
	cout << "\n\n Overall Class Average: " << (engMarksSum + mathMarksSum + phyMarksSum + chemMarksSum + bioMarksSum) / (studentCount*5);

	cout << endl << endl;
	
	return 0;
	
}
