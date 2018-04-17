#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 //Find a factorial of a positive integer
 int fact=1, n, i;
 cout <<"Enter a positive value: ";
 cin >> n;
 
 i=1; //start your counter from 1
 while ( i <= n) //make sure the condition is right 
 {
	 fact=fact*i;
	 i++;
 }
 cout <<n<< "!= " << fact << endl;
 return 0;
} 