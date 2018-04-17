#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 //Using while, write a program that keeps reading integers from user until a negative value is entered
//	prints the average of all entered numbers (-1 should be ignored). 
 int sum=0;
 int count=0;
 int numner;
 double avg;
 
 //1.Take one value before the loop
 cout <<"Enter a value (-1 to exit): ";
 cin >> numner;
 while ( numner>= 0) //make sure the condition is right 
 {
	 //2. Process it in the loop
	 sum = sum + numner;
	 count++;

	 //3. Request the next value in the last step of the loop
	 cout <<"Enter a value (-1 to exit): ";
	 cin >> numner;
 }
 if (count > 0 )
	{
		avg = (double) sum/count;
		cout <<"Sum = " << sum << endl;
		cout <<"Average = " << avg << endl;
 } else cout <<"No valid values entered\n";
 return 0;
} 