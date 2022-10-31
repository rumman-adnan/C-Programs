#include <iostream>
using namespace std;
 
// Function to compute the ASCII value of each
// character one by one
string convertSmall(string &str)
{
    int l = str.length();
    int convert;
    for (int i = 0; i < l; i++) {
        convert = str[i];
        if (convert != 32) {
        	convert +=32;
		}
        
        str[i] = convert;
        
    }
    return str;
}

bool isNumeric(string &str)
{
    int l = str.length();
    int convert;
    for (int i = 0; i < l; i++) {
        convert = str[i];
        if (convert >= 48 && convert <=57) {
        	return true;
	}
        
    }
    return false;
}
 
// Driver function
int main()
{
    string str = "RUMMAN ADNAN";
    string str2 = "57r347572897";
    
    cout << convertSmall(str) << endl;
    cout << isNumeric(str2);
    return 0;
}
