
// array_trianings_guess_the_Number_Game.c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int points = 0; 
	int answer[3];

	cout << " type the mising number in sequence\n ";

	cout << " sequence 1 \n";
	cout <<"1, 5, 10, 16,?? \n" ;
	cin >> answer[0];

	cout << " sequence 2 \n";
	cout << "2, 4, 8, 16 ,?? \n" ;
	cin >> answer[1];

	cout << " sequence 3 \n";
	cout <<"1,1,2,3,?? \n" ;
	cin >> answer[2];


	int sequences[3][5] = {

		{1,5,10,16,23},
		{2,4,8,16,32},
		{1,1,2,3,5} };

	if (answer[0] == sequences[0][4])
		points++;

	if (answer[1] == sequences[1][4])
		points++;

	if (answer[2] == sequences[2][4])
		points++;

	cout << " your points is "<< points << " from 3 \n";



	return 0;
}
