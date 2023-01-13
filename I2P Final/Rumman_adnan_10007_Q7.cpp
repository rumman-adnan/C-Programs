#include <iostream>
using namespace std;


class appliances {
	public:
		int bulbs;
		int tube;
		int fan;
		int printer;
		int laptopCharger;
		int airConditioner;
			int bulbsTime;
		int tubeTime;
		int fanTime;
		int printerTime;
		int laptopChargerTime;
		int airConditionerTime;
};
class appliancesTime {
	public:
	
};

int main () {
	
//	appliances 
	
	cout << "\n######################";
	cout << "\nSolar Energy Solution";
	cout << "\n######################\n\n";
	
	int rooms;
	int counter = 0;   // for calcualting total appliances
	int a;
	float hours;
	cout << "Enter number of rooms in entire office: ";
	cin >> rooms;
	string office[rooms];
	int totalAppliances[rooms];
	int watts[rooms];
	int applianceTime[rooms];
	int totalEnergy = 0;
	
	for (int i = 0; i < rooms; i++) {                     // store different offices names in string type in a loop
		cout << "Enter name of "<< i+1 << " office: ";
		cin >> office [i];
		
	}
	
	for (int i = 0; i < rooms; i++) { 
	

		cout << "\nFor room : " << office [i];
		appliances p[i];
		cout << "\nEnter its number of appliances: ";
		cin >> totalAppliances[i];
		applianceTime[i]=0; 								// make junk values in int array to zero
		
		while(counter < totalAppliances[i]) {
			cout << "\n1. LED Bulb";
			cout << "\n2. Tube";
			cout << "\n3. Fan";
			cout << "\n4. Printer";
			cout << "\n5. Laptop charger";
			cout << "\n6. Air conditioner\n";
			cout <<"Choose appliance " << counter+1 << " for " << office[i]<< " : ";
			cin >> a;
			switch (a) {
				case 1 :{
				cout <<"\nEnter total number of bulbs: ";
				cin >> p[i].bulbs;
				watts[i] = 15 * p[i].bulbs;
				cout << "Enter time for bulbs: ";
				cin >> p[i].bulbsTime;
				applianceTime[i] += p[i].bulbsTime;
				break;
			}
			case 2 :{
				cout <<"Enter total number of tubes: ";
				cin >> p[i].tube;
				watts[i] = 30 * p[i].tube;
				cout << "Enter time for tube lights: ";
				cin >> p[i].tubeTime;
				applianceTime[i] += p[i].tubeTime;
				break;
			}
			case 3 :{
				cout <<"Enter total number of fans: ";
				cin >> p[i].fan;
				watts[i] = 70 * p[i].fan;
				cout << "Enter time for Fans: ";
				cin >> p[i].fanTime;
				applianceTime[i] += p[i].fanTime;
				
				break;
			}
			case 4 :{
				cout <<"Enter total number of printer: ";
				cin >> p[i].printer;
				watts[i] = 50 * p[i].printer;
				cout << "Enter time for printers: ";
				cin >> p[i].printerTime;
				applianceTime[i] += p[i].printerTime;
				
				
				break;
			}
			case 5 :{
				cout <<"Enter total number of laptop charger: ";
				cin >> p[i].laptopCharger;
				watts[i] = 65 * p[i].laptopCharger;
				cout << "Enter time for laptop charger: ";
				cin >> p[i].laptopChargerTime;
				applianceTime[i] += p[i].laptopChargerTime;
				
				break;
			}
			case 6 :{
				cout <<"Enter total number of air conditioner: ";
				cin >> p[i].airConditioner;
				watts[i] = 1500 *  p[i].airConditioner;
				cout << "Enter time for  air Conditioner: ";
				cin >>  p[i].airConditionerTime;
				applianceTime[i] += p[i].airConditionerTime;
				
				break;
			}
			
			}
			counter++;
			
		}
		
		
//		cout << "Total KWH is: " = (watt * hour ) / 1000;
		
	}
	for (int i=0; i<rooms; i++ ){
			cout << "\nThe Bill for "<< office[i] << " is " << (watts[i]*applianceTime[i]) / 1000 << endl;
			totalEnergy += (watts[i]*applianceTime[i]) / 1000;
		}

	
	cout << "Total Energy for entire Building is: " << totalEnergy << endl;
	return 0;
}






