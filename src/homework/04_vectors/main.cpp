#include "vectors.h"
#include <iostream>
#include <strings>
using std::cout;
using std::cin;
using std::string;

/*

use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	int menu = 0;
	string menu_choice = "y";
	while (menu_choice == "y" || menu_choice == "Y")
	{
		cout << "Please enter a number";
		cin >> ;

		cout << "Do you want to try again? press 'y' to repeat";
		cin >> menu_choice;

	return 0;
}