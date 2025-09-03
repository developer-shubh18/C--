#include <iostream>

int main() {
    int size = 4; // Adjust size for a bigger or smaller pattern

    // Upper part of the diamond
    for (int i = 1; i <= size; ++i) {
        // Print leading asterisks
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }

        // Print middle spaces
        for (int k = 1; k <= 2 * (size - i); ++k) {
            std::cout << " ";
        }

        // Print trailing asterisks
        for (int l = 1; l <= i; ++l) {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    // Lower part of the diamond
    for (int i = size - 1; i >= 1; --i) {
        // Print leading asterisks
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }

        // Print middle spaces
        for (int k = 1; k <= 2 * (size - i); ++k) {
            std::cout << " ";
        }

        // Print trailing asterisks
        for (int l = 1; l <= i; ++l) {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    return 0;
}