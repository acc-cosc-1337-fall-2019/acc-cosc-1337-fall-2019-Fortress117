//savings_account.h
#include "bank_account.h"
class SavingsAccount : public BankAccount
{
public:
	SavingsAccount(int bal, float i = .9) :
		BankAccount(bal), interest_rate(i) {}
	void add_interest();
private:
	const float interest_rate;
	const float time = 1.0 / 12.0; // monthly interest rate. 

};