#include <iostream>
using namespace std;


int main () {
	
	

	
	int rows1, col1, rows2, col2;
	
	cout << "Enter rows for first matrix: ";
	cin >> rows1;
	cout << "Enter columns for first matrix: ";
	cin >> col1;
	cout << "Enter rows for second matrix: ";
	cin >> rows2;
	cout << "Enter columns for second matrix: ";
	cin >> col2;
	int mat1[rows1][col1];
	int mat2[rows2][col2] ;
	int mult[rows1][col2];
	
	for (int i=0; i< rows1; i++) {
		
		for (int j=0; j <col1; j++) {
			cout << "Enter the element ["<<i<<","<<j<<"] : ";
			cin >> mat1[i][j];
			
		}
		
	}
	for (int i=0; i< rows2; i++) {
		
		for (int j=0; j <col2; j++) {
			cout << "Enter the element ["<<i<<","<<j<<"] : ";
			cin >> mat2[i][j];
			
		}
		
	}
	int sum = 0;
	
	
	for(int i = 0; i < rows1; i++)  {                                   // Initializing elements of matrix mult to 0.
	                                                      
        for(int j = 0; j < col2; j++) {
		
        
            mult[i][j]=0;
        }
    }
    
	for (int i=0; i<rows1; i++) {
		
		for (int j=0; j<col2; j++) {
			
			for (int k=0; k<col1; k++) {
				
				mult[i][j] += mat1[i][k] * mat2[k][j];
				
			}
			
			cout <<	mult[i][j]<< '\t';
		}
		cout << endl;
	}
	
	
	
//	for (int i=0; i< rows1; i++) {
//		
//		for (int j=0; j <col2; j++) {
//			cout << "Enter the element ["<<i<<","<<j<<"] : ";
//			cin >> mat2[i][j];
//			
//		}
//		
//	}
	
	return 0;
}
