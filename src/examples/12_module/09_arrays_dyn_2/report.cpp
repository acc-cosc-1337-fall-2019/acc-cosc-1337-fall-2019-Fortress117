//
#include "report.h"
#include<iostream>

Report::Report()
{
	accounts = new BankAccount[SIZE]; // calls default constructor
}
void Report::display() const
{
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << accounts[i].get_balance() << "\n";

	}
}
Report::~Report()
{
	delete[] accounts;

}