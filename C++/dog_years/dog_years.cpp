
/*
    DOG YEARS
        “The first two years of a dog’s life count as 21 human years.”
*/

#include <iostream> // Allow us to perform basic input and output in the program

// Convert your dog s age into human years
int main()
{
    int dog_age = 3; // Dog age

    int early_years = 21; // Dog s first two years

    int later_years = (dog_age - 2) * 4; // Dog s following years

    int human_years = early_years + later_years; // Dog s total human years

    // Show result
    std::cout << "My name is Ronald ! Ruff ruff, I am " << human_years << " years old in human years.\n";
}