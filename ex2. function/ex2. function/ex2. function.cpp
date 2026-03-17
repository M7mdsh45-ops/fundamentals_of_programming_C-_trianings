// ex2. function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//write a program to calculate the area and volume for a sphere.

#include <iostream>
using namespace std;

float area (int radius);
float volume(int radius);
int main()
{
	int radius;
	cout << "enter the radius value \n";
	cin >> radius;
	cout << "the area of the sphere = " << area(radius)<<endl;
	cout << "the volume of the sphere =" << volume(radius) << endl;




}

float area(int radius)
{

	float result = 4 * 3.14 * radius * radius;
	return result;
}

float volume(int radius)
{

	return 4.0 / 3.0 * 3.14 * radius * radius * radius;
}