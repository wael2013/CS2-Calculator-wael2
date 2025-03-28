#include <iostream>
#include "calculator.h"

int main() {
    

    // Testing basic operations
    std::cout << "Addition: 5 + 3 = " << add(5, 3) << std::endl;
    std::cout << "Subtraction: 10 - 4 = " << subtract(10, 4) << std::endl;
    std::cout << "Multiplication: 6 * 7 = " << multiply(6, 7) << std::endl;

    try {
        std::cout << "Division: 8 / 2 = " << divide(8, 2) << std::endl;
        std::cout << "Division: 8 / 0 = " << divide(8, 0) << std::endl; // Should throw an error
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    // Factorial
    std::cout << "Factorial: 5! = " << factorial(5) << std::endl;

    // GCD and LCM
    std::cout << "GCD of 24 and 36 = " << gcd(24, 36) << std::endl;
    std::cout << "LCM of 8 and 12 = " << lcm(8, 12) << std::endl;

    // Random number generation
    std::cout << "Random number between 1 and 100: " << randomInRange(1, 100) << std::endl;

    return 0;
}