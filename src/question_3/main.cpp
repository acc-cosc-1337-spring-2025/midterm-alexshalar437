#include <iostream>
#include "question3.h"

int main() {
    int num;
    char choice;

    do {
        // Prompt user for a number and validate that it's within the range of 1 to 15
        std::cout << "Enter a number between 1 and 15: ";
        std::cin >> num;

        if (num < 1 || num > 15) {
            std::cout << "Invalid input. Please enter a number between 1 and 15." << std::endl;
            continue;  // restart the loop if the input is invalid
        }

        // Get the Fibonacci number for the entered value
        int fib_number = get_fib_number(num);

        // Display the Fibonacci number
        std::cout << "Fibonacci number for " << num << " is " << fib_number << std::endl;

        // Ask if the user wants to continue
        std::cout << "Do you want to enter another number (y/n)? ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');  // loop until user chooses to exit

    std::cout << "Goodbye!" << std::endl;
    return 0;
}