// Built-In_Functions_Training_Create_3_Apps.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    cout << min(10, -20) << "\n";
    cout << min(10, 20) << "\n";
    cout << min('a', 'c') << "\n";
    cout << min('a', 'C') << "\n";
    cout << min(10, 20) << "\n";
    cout << min({ 10, -20, 30, -100, 100, -50 }) << "\n";
    cout << " ========================= \n"; 

    cout << max(10, -20) << "\n";                        
    cout << max(10, 20) << "\n";                         
    cout << max('a', 'c') << "\n";                       
    cout << max('a', 'C') << "\n";                                            
    cout << max({ 10, -20, 30, -100, 100, -50 }) << "\n";  
    cout << "=======================\n";

    int nums[] = { 10, -20, 30, -100, 100, -50 };
    int numssize = size(nums);
    int checkMinnum = 0;

    for (int i = 0 ;i < numssize ;i++) 
    {
        if (checkMinnum > nums[i])
            checkMinnum = nums[i];

    }
    cout << checkMinnum << "\n";


    cout << "=======================\n";

    int numstwo[] = { 10 , 20 , 10 , 10 , 13 ,15 , 100 , 20 , 10 };
    int sizenumstwo = size(numstwo);
    int counter = 0;
    int chosennum = 10; 

    for (int i =0 ; i < sizenumstwo ; i++)
        if (chosennum == numstwo[i])
        {
            counter++;
        }
    cout << chosennum << " found " << counter << " times "<< "\n";
}