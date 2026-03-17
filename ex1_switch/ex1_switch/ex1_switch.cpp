// ex1_switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int day;
	cout << "welcom to our shop 3> -> we work 3 days a weak  \n ";
		cout <<" choose a day from 1 to 3  \n ";
	cin >> day;
	switch (day)
	{
	case 1:
		cout << "open from 8:00 to 14:00 \n";
		break;
	case 2 : 
		cout << "open from 14:00 to 20:00 \n";
		break;
	case 3 : 
		cout << "open from 8:00 to 20:00  \n";
		break;
	default : 
		cout << "closed \n";


	}

}

