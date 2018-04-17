#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int choice, qty;
	double unitPrice, totalPrice, grandTotal=0;
	char again;
	do
	{
	cout <<"--------------------------------------\n";
	cout <<"--- Coffee Guys ------------- Branch-1\n";
	cout <<"--------------------------------------\n";
	cout <<"1. American Coffee (15.00)-- + for Milk ---\n";
	cout <<"2. Cuppoccino      (25.00)------------\n";
	cout <<"3. Turkish   Coffee (12.00)------------\n";
	cout <<"4. Hot Chocolate    (22.00)------------\n";
	cout <<"5. Karak Chai Latte    (3.00)------------\n";
	cout <<"6. Cardomom Chai   (4.00)--- + for Milk--\n";
	cout <<"--------------------------------------\n";
	cout <<"Enter your choice: ";
	cin >> choice;
	cout <<"How many? ";
	cin >> qty;
	bool addMilk = false;
	char answer ;
	switch(choice)
	{
	case 1:  cout <<"Add Milk? (Y/N)";
			 cin >> answer;
			if ( answer == 'Y' || answer=='y')
				addMilk = true;
			if (addMilk)
				totalPrice = qty* 17;
			else
				totalPrice = qty* 15;
		    cout <<qty <<" " <<"Americano = " << totalPrice << endl;
			break;
	case 2: totalPrice = qty* 25;
		    cout <<qty <<" " <<"Cuppoccino = " << totalPrice << endl;
			break;
	case 3: totalPrice = qty* 12;
		    cout <<qty <<" " <<"Turkish   Coffee = " << totalPrice << endl;
			break;
	case 4: totalPrice = qty* 22;
		    cout <<qty <<" " <<"Hot Chocolate = " << totalPrice << endl;
			break;
	case 5: totalPrice = qty* 3;
		    cout <<qty <<" " <<"Karak Chai Latte = " << totalPrice << endl;
			break;
	case 6:  cout <<"Add Milk? (Y/N)";
			 cin >> answer;
			if ( answer == 'Y' || answer=='y')
				addMilk = true;
			if (addMilk)
				totalPrice = qty* 6;
			else
				totalPrice = qty* 4;
		    cout <<qty <<" " <<" CardamomChai = " << totalPrice << endl;
			break;
	default: cout <<"Wrong item number\n";

	}
	grandTotal = grandTotal + totalPrice;
	totalPrice=0;
	cout <<"Order another item?(Y/N) :";
	cin >> again;
	}while (again=='Y' || again=='y');
	cout <<"Your Grand Total Mr. Athba = " << grandTotal << endl;
	return 0;
}