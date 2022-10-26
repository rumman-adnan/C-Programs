#include <iostream>
using namespace std;

int main () {
	
	int pix[2][3];     // we need 2 rows and 3 columns.(fixed boxes)  It could be anything, filled with garbage values.
	 
	int pixels[2][3] = { {1,2,3} , {5,10,15} };  //Each have 3 columns (red, green)
	
//	cout << pixels[1][0] <<endl;
//	cout << pixels[2][2] <<endl;
//	cout << ++pixels[1][1] <<endl;
	
	for (int row=0; row<2; row++) {     //when we reach any row, travere through column. 
		for (int col=0; col<3; col++) {
			cout << pixels[row][col] << '\t';
		}
		cout <<endl;
	}
	
	return 0;
}
