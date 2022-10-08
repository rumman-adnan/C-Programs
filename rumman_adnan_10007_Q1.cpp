#include<iostream>
#include<conio.h>
using namespace std;


int main() {
	
	
	int classes_held;    //atteded classes
	int classes_attended; // total classes
	float percentage;
	string leaveCause;
	bool isMedical= false;
	
	cout<< "##################\n";
	cout<< "Students in Exam\n";
	cout<< "##################\n" << endl;
	
	cout << "Enter the total number of classes held \n";
	cin >> classes_held;
	cout << "Enter the total numbe of classes you attended \n";
	cin >> classes_attended;
	
	
	cout << "Enter the leave cause: ";
	cin >> leaveCause;
	
	if(leaveCause == "Medical")
	{
		isMedical=true;
	}
	
	if(isMedical) {
	//	classes_attended++;
	}
	
	
	percentage = (classes_attended)*100 / (classes_held);
	
	cout << "Percentage of classes you attended is: " << percentage;
	
 return 0;	
}
