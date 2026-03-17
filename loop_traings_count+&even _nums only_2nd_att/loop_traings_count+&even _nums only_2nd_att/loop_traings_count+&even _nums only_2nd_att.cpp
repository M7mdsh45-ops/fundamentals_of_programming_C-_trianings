// loop_traings_count+&even _nums only_2nd_att.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// count positive & even numbers only
// loop_trianings.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;
int main()
{
	int result = 0;
	int nums[] = { 10 ,20 ,-20 ,13 , 30 , -30 ,40 };

	for (int i = 0; i < 7; i++)
	{
		if (nums[i] < 0 || nums[i] % 2 != 0)
			continue;


		result += nums[i];

	}
	cout << " the result is " << result << "\n";
}