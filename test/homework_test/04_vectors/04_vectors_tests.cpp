#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../../../homework/04_vectors/vectors.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test get get max from vector")
{
	std::vector<int> nums = { 3, 8, 1, 99, 1000 };
	std::vector<int> nums_1 = { 15, 12, 11, 99, 88 };
	std::vector<int> nums_2 = { 150, 120, 11, 990, 8888 };
	REQUIRE(get_max_from_vector(nums) == 1000);
	REQUIRE(get_max_from_vector(nums_1) == 99);
	REQUIRE(get_max_from_vector(nums_2) == 8888);

}
TEST_CASE("Is the number prime")
{
	REQUIRE(is_prime(2) == true);
	REQUIRE(is_prime(4) == false);
	REQUIRE(is_prime(43) == true);
	REQUIRE(is_prime(44) == false);
}
TEST_CASE("vector of primes test")
{
	std::vector<int> nums = { 2, 3, 5, 7 };
	std::vector<int> nums_1 = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	REQUIRE(vector_of_primes(10) == nums);
	REQUIRE(vector_of_primes(50) == nums_1);
}