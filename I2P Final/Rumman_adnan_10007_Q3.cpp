#include <iostream>
using namespace std;

string decorateHeading(string);


int main () {
	
	string s1;
	cout << "Enter any string for decorations: ";
	getline(cin,s1);
	cout << decorateHeading(s1);

	
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
