#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 //Find a factorial of a positive integer multiply from n to 1
 int  n, i;
 long fact=1;
 cout <<"Enter a positive value: ";
 cin >> n;
  i=n; //start your counter from n
 while ( i >= 1) //make sure the condition is right 
 {
	 fact=fact*i;
	 i--;
 }
 cout <<n<< "!= " << fact << endl;
 return 0;
} 