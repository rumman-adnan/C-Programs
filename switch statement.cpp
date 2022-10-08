#include<iostream>
using namespace std;

int main() {
	string domain;
	
	cout << "systems:";
	getline(cin,domain);
	
	switch(domain) {
		case "systems":
			cout << "Connecting with systems domain";
			break;
			
		case "techvista":
			cout << "Connecting with techvista";
			break;
			
		default:
			cout << "kindly choose some domain.";
	}
}

