//bank_account.h
#ifndef BANK_BALANCE
#define BANK_BALANCE
class BankAccount
{
public:
	BankAccount();
	BankAccount(int b) : balance(b) {}; //inline constructor 
	void deposit(int amount);
	void withdraw(int amount);
	int get_balance() const; // const makes class members read only
private:
	int balance;
};

#endif