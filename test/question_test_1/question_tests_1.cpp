#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() function
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "[verification]") {
    REQUIRE(test_config() == true);
}

TEST_CASE("Binary conversion tests", "[decimal_to_binary]") {
    REQUIRE(decimal_to_binary(10) == "00001010");
    REQUIRE(decimal_to_binary(170) == "10101010");
    REQUIRE(decimal_to_binary(255) == "11111111");
    REQUIRE(decimal_to_binary(1) == "00000001");
    REQUIRE(decimal_to_binary(128) == "10000000");
    REQUIRE(decimal_to_binary(85) == "01010101");
}