#include <iostream>

int main() 
{
    std::cout << "Enter an interger: ";

    // take first num
    int num1{ };
    std::cin >> num1;

    std::cout << "Enter another interger: ";

    // take second num
    int num2{ };
    std::cin >> num2;

    // print results to console
    std::cout << num1 << " + " << num2 << " is " << num1 + num2 << '\n';
    std::cout << num1 << " - " << num2 << " is " << num1 - num2 << '\n';

}
