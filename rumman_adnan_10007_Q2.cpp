#include<iostream>
using namespace std;


int main() {
	
	float workerTime;		//we can enter value in decimals also, so use float
	
	
	cout<< "##################\n";
	cout<< "Worker Efficiency\n";
	cout<< "##################\n" << endl;
	
	cout << "Enter the the time in which you completed this work: ";
	cin >> workerTime;
	
	if (workerTime > 0) {

	
		if (workerTime > 2 && workerTime < 3) {
			
			cout << "\nWorker is highly efficient \n";
		}
		else if (workerTime > 3 && workerTime < 4) {
			
			cout << "\nWorker need to improve speed \n";
		}
		else if (workerTime > 4 && workerTime < 5) {
			
			cout << "\nWorker need training to improve speed \n";
		}
		else {
			
			cout << "\nYou should leave the company \n";
		}
	}
	
	return 0;
}
