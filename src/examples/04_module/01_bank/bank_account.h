//bank_account.h
#include <iostream>
#include <vector>
#include "atm.h"
using std::cout;
using std::cin;
using std::vector;
#ifndef BANK_BALANCE
#define BANK_BALANCE
class BankAccount
{
public:
	BankAccount();
	BankAccount(int b) : balance(b) {}; //inline constructor 
	int get_balance() const; // const makes class members read only
	void deposit(int amount);
	void withdraw(int amount);

	friend void display(const BankAccount& account);
	friend std::ostream & operator << (std::ostream & out,
		const BankAccount & b);
	friend std::istream & operator<< (std::istream & in, BankAccount & b);
protected:
	int balance;
	
	
};

#endif