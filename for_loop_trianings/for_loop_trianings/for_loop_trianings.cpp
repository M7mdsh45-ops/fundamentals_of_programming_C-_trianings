// for_loop_trianings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int nums[] = {100, 200, 300, 400, 500, 600};
	int numsize = sizeof(nums) / sizeof(nums[0]);
	
	for (int i = 0; i < numsize; i++)
		cout << nums[i] << endl; 
	
	// 100 , 300 ,500 
	for (int i = 0; i < numsize; i = i + 2)
		cout << nums[i] << endl;

	// 600 , 500 ,400 ,300 
	 
	for (int i =5 ; i > 1; i--)
		cout << nums[i] << endl;

	// another style -> 600 , 500 ,400 ,300 

	int i = 5;

	for (; ; )
	{

		cout << nums[i] << endl;
		i--;
		if (i == 1)
			break;
	}
}
