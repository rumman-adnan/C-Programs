#include <iostream>
#include <cmath>
#include <cstdlib>


using namespace std;


int main() {
	
	float height, weight, bmiValue;
	string bmiClassification = "normal";

	
	do {
		
		system("CLS");
	
		cout << "############################\n";
		cout << " Body Mass Index Calculator \n";
		cout << "############################\n\n\n";
	
	
		cout << "\n Enter your personal details";
		cout << "\n*****************************\n\n";
		
		
		cout << "  Enter you height (m)): ";
		cin >> height;
		
		cout << "  Enter your weight (kgs): ";
		cin >> weight;
		
		bmiValue = weight / pow(height, 2);
		
		cout << "\n\n  You BMI is calculated as: " << bmiValue << endl;
		
		if (bmiValue > 16 && bmiValue < 17) {
			
			bmiClassification = "Moderate Thinness";
		}
		else if (bmiValue > 17 && bmiValue < 18.5) {
			
			bmiClassification = "Mild Thinness";
		}
		else if (bmiValue > 18.5 && bmiValue < 25) {
			
			bmiClassification = "Normal";
		}
		else if (bmiValue > 25 && bmiValue < 30) {
			
			bmiClassification = "Over weight";
		}
		else {
			
			bmiClassification = "Invalid";
		}
		
		cout << "\n\nAccording to your height and weight your BMI classification is: " << bmiClassificaiton;
	
	} while(bmiClassification = " 'normal' ");
	
	
	cout << "You are hereby declared fit and healthy to work in a company! ";
	
	return 0;
	
}
