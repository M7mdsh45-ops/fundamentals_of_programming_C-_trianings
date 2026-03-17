// loop_trainigs_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  // Reversed Elements From User

#include <iostream>
using namespace std;
int main()
{
	int val [5];
	cout << "type 5 numbers to reverse \n";
	for (int i = 0; i < 5; i++)
	{
	cin >> val[i] ;
	}
	cout << "====================\n";
	for (int i = 4; i >= 0; i--)
	{
		cout << val[i] << "\n";

	}

}
