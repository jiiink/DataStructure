#include <iostream>

int main() {
    char currentChar;

    // Prompt user for input
    std::cout << "Enter a sequence of characters followed by '$': ";

    // Read characters until '$' is encountered
    while (std::cin >> currentChar && currentChar != '$') {
        // Process or store the characters as needed
    }

    // Check if '$' was encountered and print the character before it
    if (currentChar == '$') {
        std::cout << "Character before '$': " << std::endl;
    } else {
        std::cout << "Invalid input. '$' not found." << std::endl;
    }

    return 0;
}
