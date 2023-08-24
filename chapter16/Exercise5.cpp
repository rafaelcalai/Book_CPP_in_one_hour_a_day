#include<iostream>
#include<string>

int main()
{
    const std::string sample = "Good day String! Today is beautiful!";
    auto findCharacter = sample.find('a', 0);

    while(findCharacter != std::string::npos)
    {
        std::cout << findCharacter << " ";
        auto offset = findCharacter + 1;
        findCharacter = sample.find('a', offset);
    }
    std::cout << std::endl;

    return 0;
}