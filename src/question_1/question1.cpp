#include "question1.h"

bool test_config()
{
    return true;
}

std::string decimal_to_binary(int num) {
    std::string binaryStr;

    for (int i = 7; i >= 0; i--) {  // Loop through 8 bits (for values up to 255)
        if (num & (1 << i)) {
            binaryStr.push_back('1');
        } else {
            binaryStr.push_back('0');
        }
    }

    return binaryStr;
}