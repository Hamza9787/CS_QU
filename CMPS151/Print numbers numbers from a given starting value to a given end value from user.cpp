#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 //Print numbers numbers from 1 a given value from user
 int start;
 int end;
 cout <<"What number to start from: ";
 cin >> start;
 cout <<"What number to stop at: ";
 cin >> end;
 while ( start <= end)
 {
	 cout << start << endl;
	 start++;
 }
 return 0;
} 