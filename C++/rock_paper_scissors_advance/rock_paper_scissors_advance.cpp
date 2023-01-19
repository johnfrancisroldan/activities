
/*
  TITLE: ROCK, PAPER, SCISSORS, LIZARD, SPOCK
    DESCRIPTION:
        I invented this game with karen bryla because it seems like when you know someone well enough 75 80 of any rock paper scissors games you play with that person end up in a tie well here is a slight variation that reduces that probability this version is also nice because it satisfies the law of fives

    Game Condtions:
        ✌️  < ✋
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

#include <iostream> // Allow us to perform basic input and output in the program
#include <cstdlib>  // Allow us to use random functions

using namespace std;

int main()
{
    /* R.P.C.L.S Game. User VS Computer */

    // Iterate the game until the user is done playing

    // Generate random seed
    srand(time(NULL));

    int computer = rand() % 5 + 1; // Generate random number from 1 5
    int user_picks = 0;            // user choice
    int tries = 3;                 // User Tries
    // Game Prompt
    cout << "=======================================\n";
    cout << "Rock, Paper, Scissors, Lizard, Spock!\n";
    cout << "=======================================\n";

    while (tries > 0 && (user_picks != 1 && user_picks != 2 && user_picks != 3 && user_picks != 4 && user_picks != 5))
    {
        // Game choices
        cout << "1) ✊ Rock \n";
        cout << "2) ✋ Paper\n";
        cout << "3) ✌️ Scissors\n";
        cout << "4) 🦎 Lizard\n";
        cout << "5) 🖖 Spocks\n";

        cout << "shoot! \n";

        // User choice
        cout << "Choose: ";
        cin >> user_picks;
        // Determining the winner of the game
        if (user_picks == 1 && computer == 2)
        {
            cout << "Computer Wins:"
                 << "😁 : "
                 << "✊ VS"
                 << "🤖 : "
                 << "✋\n";
        }
        else if (user_picks == 1 && computer == 3)
        {
            cout << "Player Wins:"
                 << "😁 : "
                 << "✊ VS"
                 << "🤖 : "
                 << "✌️\n";
        }
        else if (user_picks == 1 && computer == 4)
        {
            cout << "Player Wins:"
                 << "😁 : "
                 << "✊ VS "
                 << "🤖 : "
                 << "🦎\n";
        }
        else if (user_picks == 1 && computer == 5)
        {
            cout << "Computer Wins:"
                 << "😁 : "
                 << "✊ VS "
                 << "🤖 : "
                 << "🖖\n";
        }
        else if (user_picks == 2 && computer == 3)
        {
            cout << "Computer Wins:"
                 << "😁 : "
                 << "✋ VS "
                 << "🤖 : "
                 << "✌️\n";
        }
        else if (user_picks == 2 && computer == 4)
        {
            cout << "Computer Wins:"
                 << "😁 : "
                 << "✋ VS "
                 << "🤖 : "
                 << "🦎\n";
        }
        else if (user_picks == 2 && computer == 5)
        {
            cout << "Player Wins:"
                 << "😁 : "
                 << "✋ VS "
                 << "🤖 : 🖖\n";
        }
        else if (user_picks == 2 && computer == 1)
        {
            cout << "Player Wins:"
                 << "😁 : "
                 << "✋ VS "
                 << "🤖 : ✊\n";
        }
        else if (user_picks == 3 && computer == 1)
        {
            cout << "Player Wins:"
                 << "😁 : "
                 << "✌️ VS "
                 << "🤖 : "
                 << "✊\n";
        }
        else if (user_picks == 3 && computer == 2)
        {
            cout << "Player Wins:"
                 << "😁 : "
                 << "✌️ VS "
                 << "🤖 : "
                 << "✋\n";
        }
        else if (user_picks == 3 && computer == 4)
        {
            cout << "Player Wins:"
                 << "😁 : "
                 << "✌️ VS "
                 << "🤖 : 🦎\n";
        }
        else if (user_picks == 3 && computer == 5)
        {
            cout << "Computer Wins:"
                 << "😁 : "
                 << "✌️ VS "
                 << "🤖 : 🖖\n";
        }
        else if (user_picks == 4 && computer == 1)
        {
            cout << "Computer Wins:"
                 << "😁 : "
                 << "🦎 VS "
                 << "🤖 : "
                 << "✊\n";
        }
        else if (user_picks == 4 && computer == 2)
        {
            cout << "Player Wins:"
                 << "😁 : "
                 << "🦎 VS "
                 << "🤖 : "
                 << "✋\n";
        }
        else if (user_picks == 4 && computer == 3)
        {
            cout << "Computer Wins:"
                 << "😁 : "
                 << "🦎 VS "
                 << "🤖 : ✌️\n";
        }
        else if (user_picks == 4 && computer == 5)
        {
            cout << "Player Wins:"
                 << "😁 : "
                 << "🦎 VS "
                 << "🤖 : 🖖\n";
        }
        else if (user_picks == 5 && computer == 1)
        {
            cout << "Player Wins:"
                 << "😁 : "
                 << "🖖 VS "
                 << "🤖 : "
                 << "✊\n";
        }
        else if (user_picks == 5 && computer == 2)
        {
            cout << "Computer Wins:"
                 << "😁 : "
                 << "🖖 VS "
                 << "🤖 : "
                 << "✋\n";
        }
        else if (user_picks == 5 && computer == 3)
        {
            cout << "Player Wins:"
                 << "😁 : "
                 << "🖖 VS "
                 << "🤖 : ✌️\n";
        }
        else if (user_picks == 5 && computer == 4)
        {
            cout << "Computer Wins:"
                 << "😁 : "
                 << "🖖 VS "
                 << "🤖 : 🦎\n";
        }
        else if (user_picks == computer)
        {
            cout << "Tie\n";
        }
        else
        {
            // Wrong Inputs
            if (tries != 1)
            {
                cout << "\nInvalid input. Please Try Again\n";
            }
            tries--; // Decreament
        }
    }

    cout << "\nThank you for Playing\n";
}