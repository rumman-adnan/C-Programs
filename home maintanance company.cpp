#include <iostream>
#include <cmath>
#include <cstdlib>


using namespace std;


int main() {
	
	string clientResponse;
	
	
		cout << "############################\n";
		cout << " Home Maintainance Company \n";
		cout << "############################\n\n\n";
		
	do {
		cout << "\nkindly inform us if you satisfied with the work? (Y/N)";
		cin >> clientResponse;
		
		if (clientResponse == "Y") {
			cout << "\nJob completed";
		}
		else if (clientResponse == "N") {
			cout << "\nTeam will visit again";
		}
		
		} while (clientResponse == "N");
	
	return 0;
}
