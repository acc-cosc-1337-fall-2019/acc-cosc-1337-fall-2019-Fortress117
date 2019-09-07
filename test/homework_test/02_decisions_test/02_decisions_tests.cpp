#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get grade points")
{
	REQUIRE(get_grade_points("A") == 4);
	REQUIRE(get_grade_points("B") == 3);
	REQUIRE(get_grade_points("C") == 2);
	REQUIRE(get_grade_points("D") == 1);
	REQUIRE(get_grade_points("F") == 0);
}




TEST_CASE("Test Calculate GPA")
{
	REQUIRE(calculate_gpa(45, 12) == 3.75);
	REQUIRE(calculate_gpa(390, 120) == 3.25);
	REQUIRE(calculate_gpa(180, 90) == 2.00);
}
