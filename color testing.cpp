#include <iostream>

using namespace std;

int main()  {
	
	const string myColor = "green";
	string friendColor;	
	
	
	cout << "############################" << endl;
	cout << "Program of favourite color" <<endl;
	cout << "############################" << endl << endl;

	

	cout << "Enter your favourite color: ";
	cin >> friendColor;
	
	if (friendColor == myColor){
		cout<<"Cool ! ";
	}
	
	
return 0;
	
}
