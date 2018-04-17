// This program averages 3 test scores. It repeats as
// many times as the user wishes.
#include <iostream>
using namespace std;

int main()
{
   double score;
   
   //1. Enter one value before the loop.
   cout <<"Enter student score or  (-999 to quit) : ";
   cin >> score;
   while (score!=-999)
   {
	   //2. Process the value in the first line of the loop
	   if (score < 0  || score > 100)
		   cout <<"Invalid score\n";
	   else if (score >= 90)
		   cout << "A\n";
	   else if (score >=80 )
		   cout <<"B\n";
	   else if (score >= 70)
		   cout <<"C\n";
	   else if (score >=60)
		   cout <<"D\n";
	   else 
		   cout <<"F\n";
	   //3.Request the next value in the last step in the loop
	     cout <<"Enter student score or  (-999 to quit) : ";
		 cin >> score;
   }
 
   return 0;
}