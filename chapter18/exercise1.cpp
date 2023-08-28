#include <iostream>
#include <list>

int main() {
    std::list<int> inputNumbers;
    int input = 0;
    unsigned int cycles = 0;

    std::cout << "Please enter How many numbers you want to enter: ";
    std::cin >> cycles;

    std::cout << "Please enter each number: ";
    while(cycles--)
    {
        std::cin >> input;
        inputNumbers.push_back(input);
    }

    std::cout << "List of numbers: ";
    for(auto const number : inputNumbers)
    {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}
