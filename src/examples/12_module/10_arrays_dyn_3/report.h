//constructor use for loop to initialize account to increments of 10 balance (5 times)
//display iterate and display array
//free memory using a loop to delete an nullify

#include "src/examples/12_module/08_arrays_dyn_1/bank_account.h"
//default constructor create dyanamic array of 5 Bank accounts
//display function iterate with an indexed for and display balance
//destructor free memory
class myReport
{
public:
	myReport();
	void display() const;
	~myReport();
private:
	BankAccount** accounts; // pointer that points to a pointer.
	const int SIZE{ 5 };

};
