#include <iostream>
#include <vector>
#include <array>
#include <algorithm>



class PrintDoubleValue{
private:
    int countUses = 0;
public:
    template<typename T>
    void operator() (const T value)
    {
        ++countUses;
        std::cout << value * 2 << " ";
    }
};

template<typename T>
class AscendingOrder{
public:
    bool operator () (const T& lhs, const T& rhs ) const
    {
        return  lhs < rhs;
    }
};

template<typename T>
class DescendingOrder{
public:
    bool operator () (const T& lhs, const T& rhs ) const
    {
        return  lhs > rhs;
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

    std::sort(inputData.begin(), inputData.end(), DescendingOrder<int>());
    std::cout << "\nPrinting the list in Descending Order: ";
    std::for_each(inputData.cbegin(), inputData.cend(), [](auto value) {std::cout << value << " "; });

    std::sort(inputData.begin(), inputData.end(),AscendingOrder<int>());
    std::cout << "\nPrinting the list in Ascending Order: ";
    std::for_each(inputData.cbegin(), inputData.cend(), [](auto value) {std::cout << value << " "; });

    return 0;
}
