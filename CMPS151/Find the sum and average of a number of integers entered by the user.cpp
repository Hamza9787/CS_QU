#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 //Find the sum and average of a number of intgers entered by the user
 //The user decides how many values to enter.
 int sum=0;
 int i=1;
 double avg;
 int count;
 cout <<"How many numbers are you entering: ";
 cin >> count;
 int numner; //the value entered by the user
 while ( i <= count) //make sure the condition is right 
 {
	 
	 cout <<"Enter a value: ";
	 cin >> numner;
	 sum = sum + numner;
	 i++;
 }
 avg = (double) sum/count;
 cout <<"Sum = " << sum << endl;
 cout <<"Average = " << avg << endl;
 return 0;
} 