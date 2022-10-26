#include <iostream>
using namespace std;

int main () {
	
	int rows, cols;
	cout << "Enter rows of matrix: ";
	cin >> rows;
	cout << "Enter columns of matrix: ";
	cin >> cols;
	int mat[rows][cols];

	
	for (int i=0; i< rows; i++) {
		
		for (int j=0; j <cols; j++) {
			cout << "Enter the element ["<<i<<","<<j<<"] : ";
			cin >> mat[i][j];
			
		}
		
	}
	
	
	
	
	
	
	return 0;
}
