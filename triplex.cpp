#include <iostream>

int main()
{
    // Print welcome message to the terminal
    std::cout << "You are hacking into an ATM";
    std::cout << std::endl;
    std::cout << "You'll need to enter the correct codes to continue...";
    std::cout << std::endl;

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal
    std::cout << "There are 3 numbers in the code" << std::endl; 
    std::cout << "The codes add up to: " << CodeSum << std::endl;
    std::cout << "The codes multiply to give: " << CodeProduct << std::endl;

    // Store player guesses
    int GuessA, GuessB, GuessC;

    std::cout << "Please enter three numbers separated by a space. Press enter when finished: ";
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You've hacked the ATM!!" << std::endl;
    }
    else
    {
        std::cout << "Sorry, wrong code! Police are on their way!!" << std::endl;
    }
    


    return 0;
}