
#include <iostream>
#include <vector>
#include "atm.h"
using std::cout;
using std::cin;
using std::vector;
int main()
{
	BankAccount a;
	BankAccount b = a;
	display(a); // class friend function

	//scan card and enter pin
	// get record from db into a vector
 	vector<BankAccount> accounts{BankAccount(500), BankAccount(600),BankAccount(1000)};
	ATM atm(accounts[0]);
	BankAccount account(9000);
	

	atm.deposit(100);

	atm.withdraw(50);

	atm.display_balance(); // cout << a; overload operator
	//cin >> a;
	cout << a; // overload operator

	
			   
			   
			   
			   
			   
			   
			   
			   
/*
	vector<BankAccount> accounts;
	BankAccount b1;
	accounts.push_back(b1);
	accounts.push_back(BankAccount(750));
	
	for (auto account : accounts)
	{
		cout << "Balance: " << account.get_balance() << "\n";
	}
	
	
	
	
	
	BankAccount account;
	account.deposit(5);
	cout << account.get_balance();
	*/

		
	return 0;
}