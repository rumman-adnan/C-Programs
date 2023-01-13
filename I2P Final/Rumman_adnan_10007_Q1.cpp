#include <iostream>
using namespace std;


class patient {
	public: 
	int bodyTemperature;
	int pulseRate;
	int respirationRate;
	int bloodPressure;
};

int main () {
	
	cout << "#####################";
	cout << "\nPatient Information";
	cout << "\n#####################\n\n";	
	patient p1;
	p1.bodyTemperature = 97;
	p1.pulseRate = 80;
	p1.respirationRate = 65;
	p1.bloodPressure = 100;
	
	cout << "Ptient 1: " << endl;
	cout << p1.bodyTemperature << endl;
	cout << p1.pulseRate << endl;
	cout << p1.respirationRate << endl;
	cout << p1.bloodPressure << endl;
	
	return 0;
}







string decorateHeading(string headingText) {
	
	cout << endl;
	for (int i=0; i<headingText.length(); i++) {
		putchar('#');
	}
	
	putchar('\n');
	cout << headingText;
	putchar('\n');
	
	for (int i=0; i<headingText.length(); i++) {
		putchar('#');
	}
	putchar('\n');
	putchar('\n');

}

void dashSeparator (int dashCount = 25) {
	
	cout << endl << endl;
	for (int i = 1; i <= dashCount; ++i) {
		putchar('*');
	}
	cout << endl << endl;
}
