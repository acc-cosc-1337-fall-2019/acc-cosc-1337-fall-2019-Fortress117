//
#include "report.h"
#include<iostream>



myReport::myReport()
	accounts =  new BankAccount*[SIZE]; //save 5 memory addresses
{
	//creates dynamic memory (heap) for each of the 5 addresses
	for (int i = 0; i < SIZE; ++i)
	{
		accounts[i] = new BankAccount[i*10]; // calls default constructor
	}
}
void myReport::display() const
{
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << accounts[i]->get_balance() << "\n";

	}
}
myReport::~myReport()
{
	for (int i = 0; i < SIZE; ++i)
	{
		delete accounts[i];
	}
	delete[] accounts;

}