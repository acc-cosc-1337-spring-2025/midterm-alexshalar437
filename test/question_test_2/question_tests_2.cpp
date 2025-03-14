#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

TEST_CASE("Test decimal to hex conversion") {
    // Test case 1
    REQUIRE(decimal_to_hex(10) == "A");

    // Test case 2
    REQUIRE(decimal_to_hex(170) == "AA");

    // Test case 3
    REQUIRE(decimal_to_hex(255) == "FF");
}