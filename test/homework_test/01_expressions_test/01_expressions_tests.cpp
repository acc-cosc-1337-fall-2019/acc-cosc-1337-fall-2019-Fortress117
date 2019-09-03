#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "expressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify multiply_numbers function") 
{
	REQUIRE(multiply_numbers(2, 4) == 8);
	REQUIRE(multiply_numbers(10, 10) == 100);
	REQUIRE(multiply_numbers(3, 5) == 15);
}

