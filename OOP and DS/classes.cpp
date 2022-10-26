#include <iostream>
using namespace std;


class car {
		
		public:
			string model;
			string color;
			int seats;
			int engineCC;
			int topSpeed;
			car *ptr;
	};

int main () {
	
	car c1;
	
	cout << "Class and Objects \n\n";
	
	cout << "Enter class model: ";
	cin >> c1.model;
	 
	cout << "Enter class color: ";
	cin >> c1.color;

	cout << "Enter class seat: ";
	cin >> c1.seats;
	
	cout << "Enter class engine CC: ";
	cin >> c1.engineCC;
	
	cout << "Enter class Top speed: ";
	cin >> c1.topSpeed;
		
	cout << "\n\nThe specifications of this class object is: \n";
	cout << c1.model << endl;
	cout << c1.color << endl;
	cout << c1.seats << endl;
	cout << c1.engineCC << endl;
	cout << c1.topSpeed << endl;
	
	c1.ptr = &c2;
	cout << ptr;		// for link list, it store address of next pointer. 
	
//	car mehran(2001, , 4, 600, 60);
	
	
	return 0;
	
}
