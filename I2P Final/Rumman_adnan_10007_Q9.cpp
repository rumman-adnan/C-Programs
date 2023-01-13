#include <iostream>
#include <cmath>
using namespace std;


int* zScore(int*, int);
float calculateSD(float data[]);

int main () {
	
	cout << "\n################";
	cout << "\nZ Score";
	cout << "\n################\n\n";
	
	int size;
	cout << "Enter size: ";
	cin >> size;
	float a[size];
	int size = a[size] / a[0];
	
	int* ptr = zScore(a,size);
	

   cout << "Enter elements: ";
   for(int i = 0; i < size; ++i) {
    	cin >> a[i];
   }

  cout << endl << "Standard Deviation = " << calculateSD(a);
	
	
	
	return 0;
}

int* zScore(int* a, int size) {
	
}
float calculateSD(float data[], int size) {
  float sum = 0.0, mean;
  int i;

  for(i = 0; i < size; ++i) {
    sum += data[i];
  }

  mean = sum / size;

  for(i = 0; i < 10; ++i) {
    standardDeviation += pow(data[i] - mean, 2);
  }

  return sqrt(standardDeviation / 10);
}


