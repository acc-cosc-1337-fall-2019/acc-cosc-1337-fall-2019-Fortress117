#include "savings_account.h"

//savings_account.cpp

void SavingsAccount::add_interest()
{
	double interest = balance * interest_rate * time / 100;
	deposit(interest);
}

int SavingsAccount::get_balance() const
{
	double interest = balance * interest_rate * time / 100;

	return interest + balance;
}
