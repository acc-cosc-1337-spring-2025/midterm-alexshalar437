#include <iostream>
#include "question2.h"

using namespace std;

int main() {
    int num;
    char choice;

    do {
        cout << "Enter an integer (1-512): ";
        cin >> num;

        while (num < 1 || num > 512) {
            cout << "Invalid input! Please enter a number between 1 and 512: ";
            cin >> num;
        }

        string hexValue = decimal_to_hex(num);
        cout << "Hexadecimal representation: " << hexValue << endl;

        cout << "Do you want to convert another number? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program exited.\n";
    return 0;
}