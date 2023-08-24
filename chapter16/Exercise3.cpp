#include <iostream>
#include <algorithm>


int main() {
    std::cout << "----------------------------------\n\n";

    char continueDecision = 'y';
    do
    {
        std::cout << "\nPlease enter a word, to turn upper case: ";
        std::string input;
        std::cin >> input;

        std::transform(input.begin(), input.end(), input.begin(), ::toupper);
        std::cout << "Here is the upper case version: " << input << std::endl;

        std::cout << "\nIf you wish to continue please enter 'y' " << std::endl;
        std::cin >> continueDecision;
    }while(continueDecision == 'y');


    return 0;
}
