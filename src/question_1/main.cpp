#include <iostream>
#include "question1.h"

using namespace std;

int main() {
    int num;
    char choice;

    do {
        cout << "Enter an integer (1-255): ";
        cin >> num;

        // Validate input
        while (num < 1 || num > 255) {
            cout << "Invalid input! Please enter a number between 1 and 255: ";
            cin >> num;
        }

        // Convert and display result
        string binary = decimal_to_binary(num);
        cout << "Binary representation: " << binary << endl;

        // Ask user if they want to continue
        cout << "Do you want to convert another number? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program exited.\n";
    return 0;
}