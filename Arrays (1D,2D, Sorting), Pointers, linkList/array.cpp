#include <iostream>
using namespace std;

int main () {
	
//	float percentageMarks[5];

	float percentageMarks[5] = {90, 50, 30, 70, 80};
	int ages[] = { 5, 10, 15, 20};
	int age [] =  {5, 10, 15, 20, 25, 30};
//	
//	percentageMarks[0] = 90;
//	percentageMarks[4] = percentageMarks[0];

	cout << "Provide first marks: ";
	cin >> percentageMarks[0];
	cout << percentageMarks[0] << endl;
	cout << percentageMarks[1] << endl;
	cout << percentageMarks[2] << endl;
	cout << percentageMarks[3] << endl;
	cout << percentageMarks[4] << endl;
	
	for (int i=0; i<4; i++) {
		cout << ages[i] << endl;
	}
	
	cout << "\n\n\n";
	for (int i = 0; i< (sizeof(age) / sizeof(age[i])); i++) {
		cout << age[i] << endl;
	}
	
	return 0;
}
