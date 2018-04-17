#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 //Print numbers numbers from 1 a given value from user
 int i = 1;
 int end;
 cout <<"What number to stop at: ";
 cin >> end;
 while ( i <= end)
 {
	 cout << i << endl;
	 i++;
 }
 return 0;
} 