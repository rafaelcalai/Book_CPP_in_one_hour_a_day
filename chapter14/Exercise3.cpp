#include <iostream>

// Template to swap two variables
template<typename T>
void Swap(T& num1, T&num2)
{
    T const tempVariable = num1;
    num1 = num2;
    num2 = tempVariable;
}

int main() {

    std::cout << R"(Swap variables int "255" and "12")" << std::endl;
    int num1 = 255, num2 = 12;
    std::cout << "Before swap num1 = " << num1 << " num2 = " << num2 << std::endl;
    Swap(num1, num2);
    std::cout << "After swap num1 = " << num1 << " num2 = " << num2 << std::endl;

    std::cout << "\n" << R"(Swap variables double "25.435" and "3.1415")" << std::endl;
    double num3 = 25.435, num4 = 3.1415;
    std::cout << "Before swap num3 = " << num3 << " num4 = " << num4 << std::endl;
    Swap(num3, num4);
    std::cout << "After swap num3 = " << num3 << " num4 = " << num4 << std::endl;

    return 0;
}
