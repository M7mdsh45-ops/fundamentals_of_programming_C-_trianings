// loop_break&continue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
  Loop
  - Break
  - Continue
*/

#include <iostream>
using namespace std;

int main()
{
    int nums[] = { 10, 20, 30, 40, 20, 50 };

    for (int i = 0; i < 6; i++)
    {
        cout << nums[i] << "\n";

        if (nums[i] == 10)
        {
            break;
        }

        // if (nums[i] == 20)
        // {
        //   continue;
        // }

        // cout << "After\n";
    }

    return 0;
}