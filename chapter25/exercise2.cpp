/*
 * Write a bitset class that contains 4 bits. Initialize it to a number, display the result,
 * and add it to another bitset object. (The catch: Bitsets don´t allow bitsetA = bitsetX + bitsetY)
*/

#include <iostream>
#include <bitset>

int main() {
    std::bitset<4> bitsetX {"1100"};
    std::bitset<4> bitsetY {"0111"};
    std::bitset<8> bitsetA((bitsetX.to_ulong() + bitsetY.to_ulong()));

    std::cout << "bitsetX value: " << bitsetX << " bitsetY value: " << bitsetY << std::endl;
    std::cout << "bitsetA value: \t\t\t\t" << bitsetA << std::endl;

    std::cout << "bitsetA value after toggle all bits:\t" << bitsetA.flip() << std::endl;
    return 0;
}