#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 //Find the sum and average of five intgers entered by the user
 int sum=0;
 int i=1;
 double avg;
 int numner; //the value entered by the user
 while ( i <= 5) //make sure the condition is right 
 {
	 
	 cout <<"Enter a value: ";
	 cin >> numner;
	 sum = sum + numner;
	 i++;
 }
 avg = (double) sum/5;
 cout <<"Sum = " << sum << endl;
 cout <<"Average = " << avg << endl;
 return 0;
} 