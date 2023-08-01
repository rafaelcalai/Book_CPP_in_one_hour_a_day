#include <iostream>

int main() {
    enum YourCards {Ace = 43, Jack, Queen, King};
    std::cout << "The value of card Queen is: " << Queen << std::endl;
    return 0;
}
