#include <iostream>
#include <string>
#include "question4.h"

bool is_valid_binary(const std::string& binary) {
    if (binary.length() != 8) {
        return false;
    }
    for (char c : binary) {
        if (c != '0' && c != '1') {
            return false;
        }
    }
    return true;
}

int main() {
    std::string binary;
    char choice;

    do {
        std::cout << "Enter an 8-bit binary string: ";
        std::cin >> binary;

        // Validate the binary string
        if (!is_valid_binary(binary)) {
            std::cout << "Invalid input. Please enter an 8-bit binary string containing only 0s and 1s." << std::endl;
            continue;
        }

        int decimal = binary_to_decimal(binary);
        std::cout << "The decimal value is: " << decimal << std::endl;

        std::cout << "Do you want to enter another binary string? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    std::cout << "Goodbye!" << std::endl;
    return 0;
}