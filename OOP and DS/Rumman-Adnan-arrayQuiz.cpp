#include <iostream>
using namespace std;

int main () {
	
	int size1, size2;
	cout << "Enter size of first array: ";
	cin >> size1;
	cout << "Enter size of second array: ";
	cin >> size2;
	
	int arr1[size1] = {};
	int arr2[size2] = {};	
	int unionArray[size1+size2] = {};
	int intersection[size1] = {};	
				
	cout << "\nEnter first array numbers: \n";
	for (int i=0; i<size1; i++) {
		
		cin >> arr1[i];
	}
	cout << "\nEnter second array numbers: \n";
	for (int i=0; i<size2; i++) {
		
		cin >> arr2[i];
	}
	
	for (int i=0; i<size1; i++) {
		for (int j = 0; j<size2; j++) {
			
			if (arr1[i] == arr2[j]) {
			intersection[i] = arr2[j];
		}
		}
		
	}
	
	for (int i=0; i<size1; i++) {
		for (int j = 0; j<size2; j++) {
			
			if (arr1[i] == arr2[j]) {
			unionArray[i] = arr2[j];
			}
		}
	}
//	for (int i=(sizeof(intersection)/sizeof(intersection[i])); i<size1+size2; i++) {
//		for (int j= (sizeof(intersection)/sizeof(intersection[i])); i<size1+size2; j++) {
//			
//			if (arr1[i] != arr2[j]) {
//			unionArray[i] = arr2[j];
//			}
//		}
//	}
//		

	cout << endl <<endl << "Intersection is: \n";
	for (int i=0; i<size1; i++) {
		cout << intersection[i] << endl;
	}
	cout << endl <<endl << "union is: \n";
	for (int i=0; i<size1; i++) {
		cout << unionArray[i] << endl;
	}
	
	return 0;
}
