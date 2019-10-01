#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test begin balance")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 500);

}
TEST_CASE("TEST BANKACCOUNT depsoit")
{
	BankAccount account;
	account.deposit(100);

	REQUIRE(account.get_balance() == 600);
}