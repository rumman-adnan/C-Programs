#include <iostream>  
#include <conio.h>

using namespace std;





void inputFunction (int arr1[], int size) {

	for (int i = 0 ; i < size ; i++) {
	
	cout <<"Enter the number in array at position " << i << endl;
	cin >> arr1[i];
	
	}
}


void displayFunction (int arr1[], int size) {

	cout <<"\nThe resulted array is : ";
	
	for (int i = 0 ; i < size ; i++) {
	
	
	cout << arr1[i]<<"  ";
	 }
}


void sortFunction (int arr1[], int size) {
		int temp = 0;
		
		for (int i = 0; i < size; i++) {  
		
		        for (int j = i+1; j < size; j++) {  
		       
		           if(arr1[i] > arr1[j]) {  
		           
		               temp = arr1[i];  
		               
		               arr1[i] = arr1[j];  
		               
		               arr1[j] = temp;  
		           }  
		        }  
		    }    
}





   
int main () {
 

		int size;
		
		cout <<"Enter the size of array : ";
		cin >> size;
		int arr[size];  
		inputFunction (arr,size);                 //array input
		
		displayFunction (arr,size);               //for displaying the array
		
		sortFunction (arr,size);                  // for sorting the array
		
		cout <<"\n\nPress any key to view the sorted array in ascending order ....";
//		getch();
//		
//		cout <<"\n\n";
		
		displayFunction (arr,size);               //for printing the sorted array
		
		
		return 0;  
		
}

