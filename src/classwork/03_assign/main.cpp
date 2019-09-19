//write includes statements
#include"loops.cpp"
#include"loops.h"
#include<iostream>


//write using statements for cin and cout
using std::cout;
using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	auto user_choice = 'y';
	auto choice = 0;
	do
	{
		cout << "Enter a number: ";
		cin >> choice;

		cout << factorial(choice) << "\n";
	
		cout << "Continue y or n: ";
		cin >> user_choice;
		
	} 
	while (user_choice == 'y' || user_choice == 'Y');

	return 0;
}