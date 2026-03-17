// ex3.function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//write a program that ask the user to enter 3 integer numbers and print out their sum and average

#include <iostream>
using namespace std;
int sum(int num1, int num2,int  num3);
float average(int num1, int num2, int num3);

int main()
{
    int num1, num2, num3;
    cout <<"enter 3 integer numbers \n";
    cin >> num1 >> num2 >> num3;
    cout << "the sum of the 3 numbers =" << sum(num1, num2, num3) << "\n";
    cout << "the average of the 3 numbers =" << average(num1, num2, num3) << "\n";

}

int sum(int num1, int num2, int  num3)
{

    return num1 + num2 + num3;
}
float average(int num1, int num2, int num3)
{
    return (num1 + num2 + num3) / 3.0;

}
