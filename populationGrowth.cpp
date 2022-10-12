#include <iostream>
using namespace std;

int main() {
	
	int populationA, populationB, count;
	float growthA, growthB;
	
	
	cout << "\nEnter population of town A: ";
	cin >> populationA;
	
	cout << "\nEnter population of town B: ";
	cin >> populationB;
	
	
	cout << "\nEnter growth rate of town A: ";
	cin >> growthA;
	growthA = 1+(growthA/100);

	cout << "\nEnter growth rate of town B: ";
	cin >> growthB;	
	growthB = 1+(growthB/100);
	
	cout << growthA <<endl;
	
	cout << growthB <<endl;
	while(populationA < populationB) {
		
		populationA = growthA*populationA;
		populationB = growthB*populationB;
		
		
		cout << populationA <<endl;
		cout << populationB <<endl <<endl <<endl;
		
		count++;
		
	}
	cout << "\nPopulation of A will be greater than B after "<< count <<" years.\n";
	
	
	
	return 0;
}
