// This program uses two variables with the name number.
#include <iostream>
using namespace std;

int main()
{
   double c, temp;
   char choice, again;
   
   do 
   {
   cout <<"Enter a Celsiu temperature: ";
   cin >> c;
   cout <<"----------------------------------------\n";
   cout <<"\t F for Fahrenheit\n";
   cout <<"\t K for Kelvin\n";
   cout <<"\t R for Rankine\n";
   cout <<"----------------------------------------\n";
   cout <<"Enter your choice: ";
   cin >> choice;
   switch(choice)
   {
   case 'f': 
   case 'F': temp = 1.8 * c + 32;
			 cout << c <<" Celsius = Fahrenheit = " << temp << endl;
	         break;
   case 'k': 
   case 'K': temp = c + 273.15;
			 cout << c <<" Celsius = Kelvin = " << temp << endl;
	         break;
  case 'r': 
  case 'R ': temp = (c + 273.15) * 1.8;
			 cout << c <<" Celsius = Rankine = " << temp << endl;
	         break;
   default: cout <<"You entered a wrong character\n";
   }
   cout <<"Continue?(Y/N) :";
   cin >> again;
   }while (again=='Y' || again=='y');
   return 0;
}