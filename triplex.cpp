#include <iostream>

int main()
{
    std::cout << "You are going to be robbing a bank";
    std::cout << std::endl;
    std::cout << "You need to enter the correct codes to continue...";
    std::cout << std::endl;

    const int a = 4;
    const int b = 3;
    const int c = 5;

    const int sum = a + b + c;
    const int product = a * b * c;

    std::cout << sum << std::endl;
    std::cout << product << std::endl;

    return 0;
}