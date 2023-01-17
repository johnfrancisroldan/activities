#include <iostream> // Allow us to input and output in the program

// Harry Potter Sorting Hat Quiz
int main()
{
    /* The Sorting Hat is a talking hat at Hogwarts that magically determines which of the four school Houses each new student belongs most */

    // Houses
    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    // Answers
    int answer1, answer2, answer3, answer4;

    //  Get the Highest Score
    int max = 0;

    // Get the Top 1 House
    std::string house;

    std::cout << "The Sorting Hat Quiz!\n";

    // Question # 01
    std::cout << "Q1) When I'm dead, I want people to remember me as:\n";

    std::cout << "1) The Good\n";
    std::cout << "2) The Great\n";
    std::cout << "3) The Wise\n";
    std::cout << "4) The Bold\n";
    // Input answer
    std::cin >> answer1;

    // Check Answer # 01
    switch (answer1)
    {
    case 1:
        hufflepuff++;
        break;

    case 2:
        slytherin++;
        break;

    case 3:
        ravenclaw++;
        break;

    case 4:
        gryffindor++;
        break;

    default:
        std::cout << "Invalid input.\n";
        break;
    }

    // Question # 02
    std::cout << "Q2) Dawn or Dusk?\n";
    std::cout << "1) Dawn\n";
    std::cout << "2) Dusk\n";
    // Input answer
    std::cin >> answer2;

    // Check Answer # 02
    switch (answer2)
    {
    case 1:
        gryffindor++;
        ravenclaw++;
        break;

    case 2:
        hufflepuff++;
        slytherin++;
        break;

    default:
        std::cout << "Invalid input.\n";
        break;
    }

    // Question # 03
    std::cout << "Q3) Which kind of instrument most pleases your ear?\n";
    std::cout << "1) The violin\n";
    std::cout << "2) The trumpet\n";
    std::cout << "3) The piano\n";
    std::cout << "4) The drum\n";

    // Input Answer
    std::cin >> answer3;

    // Check Answer # 03
    switch (answer3)
    {
    case 1:
        slytherin++;
        break;

    case 2:
        hufflepuff++;
        break;

    case 3:
        ravenclaw++;
        break;

    case 4:
        gryffindor++;
        break;

    default:
        std::cout << "Invalid input.\n";
        break;
    }

    // Question # 04
    std::cout << "Q4) Which road tempts you most?\n";
    std::cout << "1) The wide, sunny grassy lane\n";
    std::cout << "2) The narrow, dark, lantern-lit alley\n";
    std::cout << "3) The twisting, leaf-strewn path through woods\n";
    std::cout << "4) The cobbled street lined (ancient buildings)\n";

    // Input Answer
    std::cin >> answer4;

    // Check Answer # 04
    switch (answer3)
    {
    case 1:
        hufflepuff++;
        break;

    case 2:
        slytherin++;
        break;

    case 3:
        gryffindor++;
        break;

    case 4:
        ravenclaw++;
        break;

    default:
        std::cout << "Invalid input.\n";
        break;
    }

    // Checking the scores of each houses
    if (gryffindor > max)
    {
        max = gryffindor;
        house = "Gryffindor";
    }

    if (hufflepuff > max)
    {
        max = hufflepuff;
        house = "Hufflepuff";
    }

    if (ravenclaw > max)
    {
        max = ravenclaw;
        house = "Ravenclaw";
    }

    if (slytherin > max)
    {
        max = slytherin;
        house = "Slytherin";
    }

    // Show Result
    std::cout << house << "!\n";

    // Return success
    return 0;
}