#include <iostream>
#include <cmath>  // Included the cmath library for mathematical functions

int main() {
    double number;

    std::cout << "Enter a number: ";  // Prompt for user input
    std::cin >> number;                // Read the number from user input

    double squareRoot = sqrt(number);  // Calculates square root of input
    std::cout << "The square root of " << number << " is " << squareRoot << std::endl;

    system("pause");
    return 0;                          // End of program
}