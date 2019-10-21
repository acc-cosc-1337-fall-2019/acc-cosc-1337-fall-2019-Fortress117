
#include <iostream>
#include <vector>
#include "atm.h"
#include "checking_account.h"
#include "savings_account.h"
using std::cout;
using std::cin;
using std::vector;
int main()
{
	CheckingAccount checking(1500);
	cout << " \n Savings get_balance" << checking.get_balance() << "\n";
	

	SavingsAccount savings(500); // .05 is the interest rate we send in as a peramiter.
	cout << " \n Savings get_balance" << savings.get_balance() <<  "\n" ;

	BankAccount& account = savings;
	cout << "\n Ref to savings_get_balance: " << account.get_balance() << "\n";
	
	return 0;
}