#include "question4.h"
#include <cmath>
#include <string>

int binary_to_decimal(const std::string& binary) {
    int decimal = 0;

    // Loop through each character in the binary string
    for (int i = 0; i < 8; ++i) {
        if (binary[i] == '1') {
            decimal += std::pow(2, 7 - i);  // Calculate the power of 2 based on position
        }
    }

    return decimal;
}