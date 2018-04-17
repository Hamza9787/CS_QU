#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 //Print sum of numbers from 1 to a given value by the user
 int sum = 0, i=1;
 int end;
 cout <<"Sum of numbers for 1 to what? ";
 cin >> end;

 while ( i <= end) //make sure the condition is right 
 {
	 sum= sum+i;
	 i++;
 }
 cout <<"Sum from 1 to " <<end <<"= " << sum << endl;
 return 0;
} 