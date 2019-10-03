#include "vectors.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::vector;
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
	string choice = "y";
	vector<int> vec;
	int entry;
	int number = 0;
	vector<int> prime_vector = vector_of_primes(number);
	while( menu_choice == "y" || menu_choice == "Y")
	{
		
		cout << "Get Max from Vector press 1, Get primes press 2: ";
		cin >> menu;
		
		
		if (menu == 1)
		{

			while (choice == "y" || choice == "Y")
			{
				cout << "Please enter the list of numbers: ";
				cin >> entry;
				vec.push_back(entry);
				cout << "Press y to add another number ";
				cin >> choice;
			}
			cout << "The Max of the vector = " << get_max_from_vector(vec) << "\n";
			
		}
		else if (menu == 2)
		{
			cout << "Please enter a number to find the primes up to that number: ";
			cin >> number;
			vector<int> prime_vector = vector_of_primes(number);
			cout << "The primes of the vector  " << number << " is { ";
			for (auto i : prime_vector)
				cout << i << ' ';
			cout << " } \n\n";
			
		}
		else
		{
			cout << "Invalid Option\n";
		}

		
		cout << "Do you want to try again? press 'y' to repeat";
		cin >> menu_choice;

		
	}
}