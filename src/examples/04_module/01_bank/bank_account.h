//bank_account.h
class BankAccount
{
public:
	BankAccount();
	void deposit(int amount);
	int get_balance();
private:
	int balance;
};