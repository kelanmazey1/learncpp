#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";

    int num{ }; // define variable num as int
    std::cin >> num; // get num from user

    std::cout << "Double " << num << " is: " << num * 2 << '\n';
    std::cout << "Triple " << num << " is: " << num * 3 << '\n';

    return 0;
}
