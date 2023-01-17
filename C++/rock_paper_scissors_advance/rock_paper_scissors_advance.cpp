
/*
  ROCK, PAPER, SCISSORS, LIZARD, SPOCK
    I invented this game with karen bryla because it seems like when you know someone well enough 75 80 of any rock paper scissors games you play with that person end up in a tie well here is a slight variation that reduces that probability this version is also nice because it satisfies the law of fives

✌️ < ✋
✋ < ✊
✊ < 🦎
🦎 < 🖖
🖖 < ✌️
✌️ < 🦎
🦎 < ✋
✋ < 🖖
🖖 < ✊
✊ < ✌️
*/

#include <iostream>
#include <cstdlib>
int main()
{
    // Generate random seed
    srand(time(NULL));

    // Generate random number from 1 5
    int computer = rand() % 5 + 1;
    int user = 0;

    std::cout << "=======================================\n";
    std::cout << "Rock, Paper, Scissors, Lizard, Spock!\n";
    std::cout << "=======================================\n";

    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";
    std::cout << "4) 🦎\n";
    std::cout << "5) 🖖\n";

    std::cout << "shoot! \n";

    std::cin >> user;

    // Determining the winner of the game
    if (user == 1 && computer == 2)
    {
        std::cout << "Computer Wins:"
                  << "😁 : "
                  << "✊ VS"
                  << "🤖 : "
                  << "✋\n";
    }
    else if (user == 1 && computer == 3)
    {
        std::cout << "Player Wins:"
                  << "😁 : "
                  << "✊ VS"
                  << "🤖 : "
                  << "✌️\n";
    }
    else if (user == 1 && computer == 4)
    {
        std::cout << "Player Wins:"
                  << "😁 : "
                  << "✊ VS "
                  << "🤖 : "
                  << "🦎\n";
    }
    else if (user == 1 && computer == 5)
    {
        std::cout << "Computer Wins:"
                  << "😁 : "
                  << "✊ VS "
                  << "🤖 : "
                  << "🖖\n";
    }
    else if (user == 2 && computer == 3)
    {
        std::cout << "Computer Wins:"
                  << "😁 : "
                  << "✋ VS "
                  << "🤖 : "
                  << "✌️\n";
    }
    else if (user == 2 && computer == 4)
    {
        std::cout << "Computer Wins:"
                  << "😁 : "
                  << "✋ VS "
                  << "🤖 : "
                  << "🦎\n";
    }
    else if (user == 2 && computer == 5)
    {
        std::cout << "Player Wins:"
                  << "😁 : "
                  << "✋ VS "
                  << "🤖 : 🖖\n";
    }
    else if (user == 2 && computer == 1)
    {
        std::cout << "Player Wins:"
                  << "😁 : "
                  << "✋ VS "
                  << "🤖 : ✊\n";
    }
    else if (user == 3 && computer == 1)
    {
        std::cout << "Player Wins:"
                  << "😁 : "
                  << "✌️ VS "
                  << "🤖 : "
                  << "✊\n";
    }
    else if (user == 3 && computer == 2)
    {
        std::cout << "Player Wins:"
                  << "😁 : "
                  << "✌️ VS "
                  << "🤖 : "
                  << "✋\n";
    }
    else if (user == 3 && computer == 4)
    {
        std::cout << "Player Wins:"
                  << "😁 : "
                  << "✌️ VS "
                  << "🤖 : 🦎\n";
    }
    else if (user == 3 && computer == 5)
    {
        std::cout << "Computer Wins:"
                  << "😁 : "
                  << "✌️ VS "
                  << "🤖 : 🖖\n";
    }
    else if (user == 4 && computer == 1)
    {
        std::cout << "Computer Wins:"
                  << "😁 : "
                  << "🦎 VS "
                  << "🤖 : "
                  << "✊\n";
    }
    else if (user == 4 && computer == 2)
    {
        std::cout << "Player Wins:"
                  << "😁 : "
                  << "🦎 VS "
                  << "🤖 : "
                  << "✋\n";
    }
    else if (user == 4 && computer == 3)
    {
        std::cout << "Computer Wins:"
                  << "😁 : "
                  << "🦎 VS "
                  << "🤖 : ✌️\n";
    }
    else if (user == 4 && computer == 5)
    {
        std::cout << "Player Wins:"
                  << "😁 : "
                  << "🦎 VS "
                  << "🤖 : 🖖\n";
    }
    else if (user == 5 && computer == 1)
    {
        std::cout << "Player Wins:"
                  << "😁 : "
                  << "🖖 VS "
                  << "🤖 : "
                  << "✊\n";
    }
    else if (user == 5 && computer == 2)
    {
        std::cout << "Computer Wins:"
                  << "😁 : "
                  << "🖖 VS "
                  << "🤖 : "
                  << "✋\n";
    }
    else if (user == 5 && computer == 3)
    {
        std::cout << "Player Wins:"
                  << "😁 : "
                  << "🖖 VS "
                  << "🤖 : ✌️\n";
    }
    else if (user == 5 && computer == 4)
    {
        std::cout << "Computer Wins:"
                  << "😁 : "
                  << "🖖 VS "
                  << "🤖 : 🦎\n";
    }
    else if (user == computer)
    {
        std::cout << "Tie\n";
    }
    else
    {
        std::cout << "Invalid input.\n";
    }

    return 0;
}