#include <iostream>
using namespace std;


void inputFunction(int arr[], int size) {
	
	for (int i = 0; i < size; i++) {
		cout << "Enter array element at position " << i << " : " << endl;
		cin >> arr[i];
	}
	
	
}
void displayFunction (int arr[], int size) {

	cout <<"\nThe resulted array is : ";
	
	for (int i = 0 ; i < size ; i++) {
	
	
	cout << arr[i] << '\t' ;
	 }
}

selectionSort(int arr[], int size) {
	
	int index, temp;
	for (int i=0; i< size-1; i++) {
		
			index = i;
		
		for (int j = i+1; j < size; j++) {
			
			if (arr[index] < arr[j]) {
				index = j;
			}
			temp = arr [index];
			arr[index] = arr[j];
			arr[j] = temp;
		}
		
		
		
	}
}


int main () {
	
	int size;
	cout << "Enter the size of array: ";
	cin >> size;
	int a[size];
	
	inputFunction(a, size);
	displayFunction(a,size);
	
	selectionSort(a,size);
	cout << "\n\nAfter sorting, the array is: " << endl;
	displayFunction(a,size);
	
	return 0;
}
