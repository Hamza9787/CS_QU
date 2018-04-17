#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 //Print number from a given positive value to 1
 int value;
 cout <<"Enter a postive value: ";
 cin >> value;
 while ( value >= 1)
 {
	 cout << value << endl;
	 value--;
 }
 return 0;
} 