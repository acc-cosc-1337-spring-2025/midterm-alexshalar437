#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Binary to Decimal conversion") {
    REQUIRE(binary_to_decimal("00001010") == 10);

    REQUIRE(binary_to_decimal("10101010") == 170);

    REQUIRE(binary_to_decimal("11111111") == 255);
}