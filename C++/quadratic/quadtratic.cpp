/*
QUADTRAC FORMULA
  Solves the quadratic equation for the x‘s
*/

// Import Libraries
#include <iostream> // Allow us to perform basic input and output in the program
#include <cmath>    // To perform mathematical operations

int main()
{

    // Decimal numbers
    double a, b, c;

    // Getting the a b c
    std::cout << "Enter a: ";
    std::cin >> a;

    std::cout << "Enter b: ";
    std::cin >> b;

    std::cout << "Enter c: ";
    std::cin >> c;

    // Root 1 formula positive
    double root1 = ((-b) + std::sqrt(std::pow(b, 2) - (4 * a * c))) / (2 * a);

    // Root 2 formula negative
    double root2 = ((-b) - std::sqrt(std::pow(b, 2) - (4 * a * c))) / (2 * a);

    // Show result
    std::cout << "Root 1 is " << root1 << "\n";
    std::cout << "Root 2 is " << root2 << "\n";
}