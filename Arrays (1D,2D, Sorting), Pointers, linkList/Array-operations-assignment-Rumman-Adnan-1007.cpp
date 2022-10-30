#include <iostream>
using namespace std;



void display (int*, int &);
int* arrayUnion(int*, int*, int*, int &, int &, int &);
int* arrayIntersection(int*, int*, int*, int &, int &, int &);
bool checkDuplicates(int* ,int &) ;
int* subtraction (int*, int*, int*, int &, int &, int &);
int* complement(int*, int*, int*, int &, int &, int &);

int main () {
	
	
	int size1, size2, uniSize;
	cout << "Enter size of universal array: ";
	cin >> uniSize;
	cout << "Enter size of first array: ";
	cin >> size1;
	cout << "Enter size of second array: ";
	cin >> size2;
	
	int arr1[size1];
	int arr2[size2];
	int uniArr[uniSize];
	
	int intersection[size1] = {};	
	int intersectionSize = 0;
	
	int unionSize = 0;
	int unionArr[size1+size2] = {};
	
	int subtractedArr[size1];
	int subtractedSize = 0;
	
	int complement1Arr[uniSize];
	int complement1Size = 0;
	
	int complement2Arr[uniSize];
	int complement2Size = 0;
	
	int leftSideArr[uniSize];
	int leftSideSize = 0;
	
	int rightSideArr[uniSize];
	int rightSideSize = 0;
	
	
	bool check1 = 1, check2 = 1, check3 = 1;	
	
	while(1) {
		
		cout << "\nEnter universal array numbers: \n";
		for (int i=0; i<uniSize; i++) {
			
			cin >> uniArr[i];
		}
		
		cout << "\nEnter first array numbers: \n";
		for (int i=0; i<size1; i++) {
			
			cin >> arr1[i];
		}
		
		
		cout << "\nEnter second array numbers: \n";
		for (int i=0; i<size2; i++) {
			
			cin >> arr2[i];
		}
		
		
		check1 =  checkDuplicates(arr1,size1);        // check is 0 when there are no duplicates in array, check is 1 if array has duplicates
		check2 =  checkDuplicates(arr2,size2);
		check3 =  checkDuplicates(uniArr,uniSize);
		
		if(check1 == 0 && check2 == 0 && check3 == 0) {
			break;
		}
		
		cout << check1 << endl << check2;
		
	//	system("cls");
		cout << "\nPlease enter unique numbers for both arrays: \n";
	}
		
	
	cout<<"\nThe intersection of the two arrays: ";  // Show intersection array
    int* intersectionPtr = arrayIntersection(arr1, arr2, intersection, size1, size2, intersectionSize);  // Its return type is void not int. 
//	int n = (sizeof(intersectionPtr))/(sizeof(intersectionPtr[1]));  // can not do like this, it always return 2, does not catch size of array
	display(intersectionPtr, intersectionSize);
	
	
	cout<<"\nThe Union of the two arrays: ";
	int* unionPtr = arrayUnion(arr1, arr2, unionArr, size1,size2, unionSize);  // unionSize declared in main, calculated in functions, automatically maps into main. 
	display(unionPtr, unionSize);
	
	cout<<"\nThe subtracted array is: "; 
	int* subtractedPtr = subtraction(arr1, arr2, subtractedArr, size1, size2, subtractedSize);
	display(subtractedPtr, subtractedSize);
	
	cout<<"\nThe complement of first array is: "; 
	int* complement1Ptr = subtraction(uniArr, arr1, complement1Arr, uniSize, size1, complement1Size);
	display(complement1Ptr, complement1Size);
	
	cout<<"\nThe complement of second array is: "; 
	int* complement2Ptr = subtraction(uniArr, arr2, complement2Arr, uniSize, size2, complement2Size);
	display(complement2Ptr, complement2Size);
	
	cout<<"\nDemorgans left side is: "; 
	int* leftDemorgans = subtraction(uniArr, unionPtr, leftSideArr, uniSize, unionSize, leftSideSize);  // Subtract union array from universal array and dave in leftSide Array
	display(leftDemorgans, leftSideSize);


	cout<<"\nDemorgans right side is: "; 
	int* rightDemorgans = arrayIntersection(complement1Ptr, complement2Ptr, rightSideArr, complement1Size, complement2Size, rightSideSize);
	display(rightDemorgans, rightSideSize);

	return 0;
}

void display(int* arrptr, int &size) {
	for (int i=0; i<size; i++ ) {
		
		cout << arrptr[i] << " ";
	}
	cout << "\n\n";
}

int* arrayUnion(int* arr1, int* arr2, int* unionArr, int &size1, int &size2, int &unionSize) {
	
	bool flag = 0;

		
	
	for (int i=0; i<size1; i++) {				//Union array logic
		
	 unionArr[unionSize] = arr1[i];
	 	unionSize++;
	}
	
	for (int i=0; i<size2; i++) {       
		
		flag = 0;
		
		for (int j = 0; j<size1; j++) {
			
			if (arr1[j] == arr2[i]) {
				flag = 1;
				break;
			}
		}
		if (flag != 1) {
		
			unionArr[unionSize] = arr2[i];
	 		unionSize++;
		}
	}
	return unionArr;
}

int* arrayIntersection(int* arr1, int* arr2, int* intersection, int &size1, int &size2, int &intersectionSize) {
	
	
	
	
	for (int i=0; i<size1; i++) {       //intersection array logic
		for (int j = 0; j<size2; j++) {
			
			if (arr1[i] == arr2[j]) {
			intersection[intersectionSize] = arr1[i];
			intersectionSize++; 
		}
		}
		
		
	}
//	for (int i =0; i<counter; i++) {
//		cout << intersection[i] << " ";
//	}
//	cout << "\n\n";
	return intersection;
}

bool checkDuplicates(int* inputArray,int &size) {
	
	
	for (int i = 0; i<size; i++) {
		
		for (int j=i+1; j<size; j++) {
			
			if(inputArray[i] == inputArray[j]) {
				return true;
			}
		
		}
	}
	return false;
}

int* subtraction (int* arr1, int* arr2, int* subtractedArr, int &size1, int &size2, int &subtractedSize) {
	
	for (int i = 0; i < size1; i++) {
		
		bool flag=0;
		for (int j=0; j<size2; j++) {
			
			if (arr1[i] == arr2[j]) {
				
				flag = 1;
				break;
			}
		}
		if (flag !=1) {
			subtractedArr [subtractedSize] = arr1[i];
			subtractedSize++;
		}
	}
	return subtractedArr;
}
int* complement(int* uniArr, int* arr, int* complementArr, int &uniSize, int &size, int &complementSize) {
	

    int j;
	for (int i = 0; i<=uniSize; i++) {
			
			for ( j =0; j <=size; j++) {
				
				if( uniArr[i] == arr[j]) {
					break;
				}				
			}
			if (j == size) {
				complementArr[i] = uniArr[i];
				complementSize++;
			}
			
	}
	return complementArr;
	
} 











