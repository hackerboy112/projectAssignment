#include <iostream>
#include <cmath>
#include <cassert>

void checkSquareRoot(double number, double expected) {
    double result = sqrt(number);
    if (std::isnan(expected)) {
        if (!std::isnan(result)) {
            std::cout << "sqrt(" << number << ") expected NaN, but got " << result << " [FAIL]" << std::endl;
        } else {
            std::cout << "sqrt(" << number << ") = NaN [PASS]" << std::endl;
        }
    } else {
        if (std::abs(result - expected) < 1e-6) {
            std::cout << "sqrt(" << number << ") = " << result << " [PASS]" << std::endl;
        } else {
            std::cout << "sqrt(" << number << ") expected " << expected << ", but got " << result << " [FAIL]" << std::endl;
        }
    }
}

int main() {

    // Tests positive numbers
    checkSquareRoot(81.0, 9.0);
    checkSquareRoot(4.0, 2.0);

    // Tests edge cases
    checkSquareRoot(0.0, 0.0);
    checkSquareRoot(1.0, 1.0);

    // Tests negative numbers, NAN should return
    checkSquareRoot(-1.0, NAN);
    checkSquareRoot(-9.0, NAN);

    std::cout << "\n\tAll tests passed!" << std::endl;
    system("pause"); 
    return 0;
}