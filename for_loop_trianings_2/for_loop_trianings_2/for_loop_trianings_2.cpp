// for_loop_trianings_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

	string products[] = {"item 1", "item 2 ", " item 3"};
	string sizes [] = {"small", "large", " x-large"};

	int numsof_products = sizeof (products) / sizeof ( products[0]);
	int numsof_sizes = sizeof (sizes) / sizeof ( sizes[0]);




	for (int i = 0; i < numsof_products; i++)
	{
		cout << "product name : \n ";
		cout<< products[i] << "\n";
		cout << "sizes : \n";

		for (int j = 0; j < numsof_sizes; j++)
		{
			cout << sizes[j];
			if (j < 2) {
				cout << ", ";

			}
			
		
		}
		cout << "\n====================== \n";
	}
		



	
	








}

