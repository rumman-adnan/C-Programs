#include <iostream>
using namespace std;


int main () {
	
	int rows, cols;
	cout << "Enter rows of matrix: ";
	cin >> rows;
	cout << "Enter columns of matrix: ";
	cin >> cols;
	int mat[rows][cols];
	int transposeMat[cols][rows];
	
	for (int i=0; i< rows; i++) {
		
		for (int j=0; j <cols; j++) {
			cout << "Enter the element ["<<i<<","<<j<<"] : ";
			cin >> mat[i][j];
			
		}
		
	}
	
	cout << "\nThe entered matrix is: \n";
	for (int i=0; i< rows; i++) {
		
		for (int j=0; j <cols; j++) {
			
			cout << mat[i][j] << '\t';
		}
		cout << endl;
		
	}
	cout << "\nThe transpose matrix is: \n";
	
	for (int i=0; i< cols; i++) {
		
		for (int j=0; j <rows; j++) {
			
			transposeMat[i][j] = mat[j][i];
			cout << transposeMat[i][j] << '\t';
		}
		cout << endl;
		
	}
	
	return 0;
}
