//
// function learing

#include <iostream>
using namespace std;


void say_hello(string msg, string name, int age)
{
	cout << msg << " " << name << ", " << "\n";
	cout << name << "'s age is : " << age << "." << "\n";
}


int main()

{
	say_hello("Hi", "ossama", 25);
	say_hello("Hi", "ahmed", 20);
	say_hello("Hi", "amr", 45);




}
