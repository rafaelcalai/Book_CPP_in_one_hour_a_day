#include <iostream>

#define MULTIPLY(X , Y) ((X) * (Y))

void Display() {}

template<typename T, typename ...Last>
void Display(T const num, Last... args)
{
    std::cout << "From template function, the value of the number is: " << num << std::endl;
    Display(args ...);
}

//#define SPLIT(x) x/5
template<typename  T>
T Split(const T num)
{
    return num / 5;
}

int main() {
    std::cout << "Using macro to multiply two number 2 and 7" << std::endl;
    std::cout << "Result: " << MULTIPLY(2, 7) << std::endl;

    std::cout << "The split template using double 12.57:" << std::endl;
    const double num1 = 12.57;
    std::cout << "The result is: " << Split(num1) << std::endl;

    std::cout << "The split template using int 11:" << std::endl;
    const int num2 = 11;
    std::cout << "The result is: " << Split(num2) << std::endl;

    std::cout << std::endl;
    Display("String arg", num1);
    Display(num2);

    return 0;
}
