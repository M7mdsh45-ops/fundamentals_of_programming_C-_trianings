// ex. functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
// write a program that ask the user to enter 2 integer numbers and print out the larger of them ''usuing a function ''

#include <iostream>
using namespace std;

//int larger(int num1, int num2);


int main()
{
	int num1, num2;
	cout << "enter 2 integer numbers \n";
	cin >>num1 >> num2;
	//cout << "the larger number is :" << larger(num1, num2) << "\n";
	cout << " the result is : "<<larger(num1, num2) / 2<< endl;

}
int larger(int num1, int num2)
{
	
	if (num1 >= num2)
		return num1;
	else
		return num2;

}