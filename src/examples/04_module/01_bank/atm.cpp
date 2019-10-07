#include "atm.h"
#include <iostream>

//atm.cpp

using std::cout;


ATM::ATM(BankAccount a) :account(a)
{

	
}
void ATM::deposit(int amount)
{
	account.deposit(amount);

}

void ATM::withdraw(int amount)
{
	account.withdraw(amount);
}

void ATM::display_balance() const
{

	cout << "Balance: " << account.get_balance();
}
