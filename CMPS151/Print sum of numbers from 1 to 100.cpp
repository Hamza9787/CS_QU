#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 //Print sum of numbers from 1 to 100
 int sum = 0, i=1;

 while ( i <= 100) //make sure the condition is right 
 {
	 sum= sum+i;
	 i++;
 }
 cout <<"Sum = " << sum << endl;
 return 0;
} 