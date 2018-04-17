#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
  int s1;
  char again;
  do
  {
	  cout << "Enter your score : ";
	  cin >> s1 ;
	  if (s1 < 0 || s1 > 100)
		  cout <<"Ivalid score\n";
	  else if (s1 >=90)
		  cout << "A\n";
	  else if ( s1 >= 80)
		  cout <<"B\n";
	  else if ( s1 >= 70)
		  cout <<"C\n";
	  else if (s1 >= 60)
		  cout << "D\n";
	  else
		  cout <<"F , come back quickly after the bream MR. 3athba\n";
	  cout <<"Contunue to enter new scores (Y/N) : ";
	  cin >> again;
  }while (again=='Y' || again=='y');
  cout <<"\nBye\n";
  return 0;
}