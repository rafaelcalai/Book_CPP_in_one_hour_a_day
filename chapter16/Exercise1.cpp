#include <iostream>

bool PalindromeCheck(const std::string& text)
{
    std::string reverseText = text;
    std::reverse(reverseText.begin(), reverseText.end());
    //std::cout << "Text: " << text << std::endl;
    //std::cout << "Reverse Text: " << reverseText << std::endl;
    return (reverseText == text);
}


int main() {
    std::cout << "----------------------------------\n\n";

    char continueDecision = 'y';
    do
    {
        std::cout << "\nPlease enter a word, to check if it's a palindrome:";
        std::string input;
        std::cin >> input;
        if(PalindromeCheck(input))
        {
            std::cout << "The word " << input << " is a palindrome" << std::endl;
        }
        else
        {
            std::cout << "The word " << input << " is not a palindrome" << std::endl;
        }

        std::cout << "\nIf you wish to continue please enter 'y' " << std::endl;
        std::cin >> continueDecision;
    }while(continueDecision == 'y');


    return 0;
}
