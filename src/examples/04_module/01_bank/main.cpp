#include "bank_account.h"
#include <iostream>

using std::cout;
int main()
{
	BankAccount account;
	account.deposit(5);
	cout << account.get_balance();

		
	return 0;
}