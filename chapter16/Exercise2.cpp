#include <iostream>

auto CountVowels(const std::string& text)
{
    const char vowels[]  = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    long int value = 0;

    for(char vowel : vowels)
    {
        value += std::count(text.begin(), text.end(), vowel);
    }

    return value;
}


int main() {
    std::cout << "----------------------------------\n\n";

    char continueDecision = 'y';
    do
    {
        std::cout << "\nPlease enter a word, to count the number of vowels: ";
        std::string input;
        std::cin >> input;

        std::cout << "There are " << CountVowels(input) << " vowels in " << input << std::endl;

        std::cout << "\nIf you wish to continue please enter 'y' " << std::endl;
        std::cin >> continueDecision;
    }while(continueDecision == 'y');


    return 0;
}
