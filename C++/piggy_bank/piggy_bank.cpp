// Piggy Bank

#include <iostream>  // Allow us to perform basic input and output in the program

// Calculate the total USD by converting Colombian, Brazilian, and Peruvian money to USD
int main()
{

    // currency variables
    double dollars, pesos, reais, soles;

    // 1 Colombian Pesos to  0.00021 USD
    std::cout << "Enter number of Colombian Pesos: ";
    std::cin >> pesos;

    // 1 Brazilian Reais to 0.20 USD
    std::cout << "Enter number of Brazilian Reais: ";
    std::cin >> reais;

    // 1 Peruvian Soles to 0.27 USD
    std::cout << "Enter number Peruvian Soles: ";
    std::cin >> soles;

    //  total USD
    dollars = (0.00021 * pesos) + (0.20 * reais) + (0.27 * soles);

    // Result
    std::cout << "US Dollars = $" << dollars << "\n";
}
