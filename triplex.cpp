#include <iostream>

void PrintIntroduction(int Difficulty)
{
    std::cout << "\nYou are hacking into a level " << Difficulty;
    std::cout << " bank...\nYou'll need to enter the correct codes to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    // Declare 3 number codes
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal
    std::cout << "There are 3 numbers in the code\n"; 
    std::cout << "The codes add up to: " << CodeSum << std::endl;
    std::cout << "The codes multiply to give: " << CodeProduct << std::endl;

    // Store player guesses
    int GuessA, GuessB, GuessC;

    std::cout << "Please enter three numbers separated by a space. Press enter when finished: ";
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the player's guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You've hacked the bank!!\n\n";
        return true;
    }
    else
    {
        std::cout << "Sorry, wrong code! Police are on their way!!\n\n";
        return false;
    }
}

int main()
{
    int LevelDifficulty = 1;
    while (true)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();   // Clears any errors
        std::cin.ignore();  // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }
    
    return 0;
}