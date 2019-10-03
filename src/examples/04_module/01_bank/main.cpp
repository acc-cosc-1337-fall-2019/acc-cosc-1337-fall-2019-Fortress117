#include "bank_account.h"
#include <iostream>
#include <vector>
using std::cout;
using std::vector;
int main()
{
	vector<BankAccount> accounts;
	BankAccount b1;
	accounts.push_back(b1);
	accounts.push_back(BankAccount(750));
	
	for (auto account : accounts)
	{
		cout << "Balance: " << account.get_balance() << "\n";
	}
	
	
	
	
	
	/*BankAccount account;
	account.deposit(5);
	cout << account.get_balance();
	*/

		
	return 0;
}