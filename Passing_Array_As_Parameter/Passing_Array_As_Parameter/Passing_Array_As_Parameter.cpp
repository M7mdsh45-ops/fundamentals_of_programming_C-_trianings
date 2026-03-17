// Passing_Array_As_Parameter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void calc (int nums[], int count)
{
	int result = 0;

	for (int i = 0 ; i < count ; i++ ) 
	{
		result += nums[i] ;
	}
		cout << " The Result Is : " << result << " \n";
}

int main()
{

	int arrayofnumbers[] = { 10 ,20 ,30 ,40 ,100 };
	int numsize = size(arrayofnumbers);
	
	calc(arrayofnumbers , numsize);

	return 0;
}




