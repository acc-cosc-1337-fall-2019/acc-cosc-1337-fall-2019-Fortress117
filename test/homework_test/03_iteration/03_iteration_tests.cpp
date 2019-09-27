#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}
TEST_CASE("Test function get_gc_content(string dna)") 
{
	REQUIRE(get_gc_content("AGCTATAG") == .375);
	REQUIRE(get_gc_content("CGCTATAG") == .50);
}
TEST_CASE("Test function get_reverse_string(string dna)")
{
	REQUIRE(get_reverse_string("AGCTATAG") == "GATATCGA");
	REQUIRE(get_reverse_string("CGCTATAG") == "GATATCGA");
}
TEST_CASE("Test get dna complement")
{
	REQUIRE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
	REQUIRE(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG");
	
}