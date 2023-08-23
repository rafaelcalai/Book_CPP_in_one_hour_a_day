#include <iostream>

#define MULTIPLY(X , Y) ((X) * (Y))


int main() {
    std::cout << "Using macro to multiply two number 2 and 7" << std::endl;
    std::cout << "Result: " << MULTIPLY(2, 7) << std::endl;

    return 0;
}
