/*
 Write a program that demonstrates that the size of an unsigned integer and a normal integer are the same
 and both are smaller than a long integer.
 */
#include <iostream>

int main()
{
    std::cout << "The size of integer is: \t\t" << sizeof (int) << std::endl;
    std::cout << "The size of unsigned integer is: \t" << sizeof (unsigned int) << std::endl;
    std::cout << "The size of long integer is: \t\t" << sizeof (long int) << std::endl;
    return 0;
}