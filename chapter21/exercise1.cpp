#include <iostream>
#include <vector>


class PrintDoubleValue{

public:
    template<typename T>
    void operator() (const T value)
    {
        std::cout << value * 2 << " ";
    }
};


int main() {
    int size = 0;
    std::vector<int> inputData;
    std::cout << "Please enter how many number you want: ";
    while((std::cin >> size) && size < 1)
    {
        std::cout << "Please enter a positive value!" << std::endl;
    }

    for (int i = 0; i < size; ++i)
    {
        int input = 0;
        std::cout << "Please enter a number: ";
        std::cin >> input;
        inputData.push_back(input);
    }

    std::cout << "Printing the list multiplied by 2: ";
    std::for_each(inputData.cbegin(), inputData.cend(), PrintDoubleValue());

    return 0;
}
