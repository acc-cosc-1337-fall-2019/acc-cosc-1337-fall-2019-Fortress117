#include "bank_account.h"

//bank_account.cpp

BankAccount::BankAccount()
{
	//code to read data from data base
	balance = 500;
}

void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
		
	}
}
int BankAccount::get_balance()
{
	return balance;
}