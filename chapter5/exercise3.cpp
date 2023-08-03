#include <iostream>

int main() {
    bool value1, value2;
    std::cout << "Please enter two boolean values:" << std::endl;
    std::cin >> value1 >> value2;


    std::cout << "Bitwise operations with: " << value1 << " and " << value2 << std::endl;
    std::cout << value1 << " OR " << value2 << " = " << (value1 | value2) << std::endl;
    std::cout << value1 << " AND " << value2 << " = " << (value1 & value2) << std::endl;
    std::cout << value1 << " XOR " << value2 << " = " << (value1 ^ value2) << std::endl;
    return 0;
}
