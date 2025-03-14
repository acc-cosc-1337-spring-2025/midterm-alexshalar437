#include "question2.h"
#include <algorithm>

std::string decimal_to_hex(int num) {
    std::string hexStr;
    char hexDigits[] = {'0', '1', '2', '3', '4', '5', '6', '7', 
                        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    
    while (num > 0) {
        int remainder = num % 16;
        hexStr.push_back(hexDigits[remainder]);
        num /= 16;
    }

    std::reverse(hexStr.begin(), hexStr.end());

    return hexStr;
}