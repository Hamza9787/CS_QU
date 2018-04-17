#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 //Print sum of numbers between to values x and y
 int sum = 0, i=1;
 int x, y;
 cout <<"Enter starting value: ";
 cin >> x;
 cout <<"Enter ending value: ";
 cin >> y;
 i=x; //start your counter from x
 while ( i <= y) //make sure the condition is right 
 {
	 sum= sum+i;
	 i++;
 }
 cout <<"Sum of values from " << x <<" to " << y <<"= " << sum << endl;
 return 0;
} 