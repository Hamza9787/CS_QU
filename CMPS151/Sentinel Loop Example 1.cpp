// This program averages 3 test scores. It repeats as
// many times as the user wishes.
#include <iostream>
using namespace std;

int main()
{
   double sum=0, value;
   //1. Enter one value before the loop.
   cout <<"Enter a +ve or (-ve to quit) : ";
   cin >> value;
   while (value >= 0)
   {
	   //2. Process the value in the first line of the loop
	   sum=sum+value;

	   //3.Request the next value in the last step in the loop
	    cout <<"Enter a +ve or (-ve to quit) : ";
		cin >> value;
   }
   cout <<"Sum = " << sum << endl;
   return 0;
}