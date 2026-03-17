// loop_trianings_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// -- Guess The Number

#include <iostream>
using namespace std;
int main()
{
	int guessnumber = 7 ;
	int guesstries = 0 ;
	int choose;
	cout << "Please Guess The Number Between 1 and 10 \n";
	cout << "you only have 3 chances \n";
	while (true)
	{
		cin >> choose;
		if (choose == guessnumber)
		{
			cout << " congrats , you nailed it \n ";
			break;
		}

		else
		{
			cout << " wrong guess  \n";
			guesstries++;
		}

		if (guesstries == 3) 
		{
			cout << "sorry , you failed \n ";
			cout <<"the number is " << guessnumber << "\n";
			break;
		}



	}


}
