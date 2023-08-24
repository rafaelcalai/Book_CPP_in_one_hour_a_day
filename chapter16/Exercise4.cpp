#include<iostream>
#include<string>

int main()
{
    const std::string string1 = "I", string2 = "Love" , string3 = "STL", string4 = "String";
    const std::string finalString = string1 + " " + string2 + " " + string3 + " " + string4;
    std::cout << finalString << std::endl;
    return 0;
}