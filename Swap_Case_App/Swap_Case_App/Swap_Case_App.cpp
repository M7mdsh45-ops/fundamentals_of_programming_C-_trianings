// Swap_Case_App.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
using namespace std;
int main()
{
   
	string nameone = "ElZEro" ;
	int numonesize = size(nameone);

	for ( int i = 0 ; i < numonesize; i++)
	{
		if (isupper(nameone[i]))
		{
			cout << char(tolower(nameone[i])) ;
		 
		}
		else 
		{
			cout << char(toupper(nameone[i])) ;
		}

	}

		

}