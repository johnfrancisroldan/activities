/*
    FIZZ BUZZ
        For or multiples of 3 print fizz instead of the number and for the multiples of 5 print buzz for numbers which are multiples of both 3 and 5 print fizz buzz
*/

#include <iostream> // Allow us to input and output in out program

// Determining if the number is fizz buzz and fizz buzz
int main()
{
    // Iteratate 1 100
    for (int i = 1; i != 101; i++)
    {
        // Multiples of both 3 and 5
        if (i % 3 == 0 && i % 5 == 0)
        {
            std::cout << "FizzBuzz\n";
        }
        // Multiples of 3
        else if (i % 3 == 0)
        {
            std::cout << "Fizz\n";
        }
        // Multiples of 5
        else if (i % 5 == 0)
        {
            std::cout << "Buzz\n";
        }
        // Default
        else
        {
            std::cout << i << "\n";
        };
    };

    // Return success
    return 0;
}
