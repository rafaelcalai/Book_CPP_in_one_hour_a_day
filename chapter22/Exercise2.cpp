#include <iostream>
#include <vector>
#include <algorithm>

auto Reorder = [] (auto& rhs, auto& lhs) {return (lhs < rhs); };

template<typename T>
void DisplayVector(const T& displayVector)
{
    for(int number : displayVector)
    {
        std::cout << number << " ";
    }
    std::cout << std::endl;
}


int main() {
    int addValue = 0;
    std::cout << "Please enter a value to be added to each element of the vector: ";
    std::cin >> addValue;

    std::cout << "\nOriginal Vector" << std::endl;
    std::vector<int> sampleVector {1251 , 33, 55, 12, 79, 25, 11, 35, 17, 39, 44, 100, 99};
    DisplayVector(sampleVector);

    std::cout << "\nVector Sorted" << std::endl;
    std::sort(sampleVector.begin(), sampleVector.end());
    DisplayVector(sampleVector);

    std::cout << "\nVector Sorted in descendent order" << std::endl;
    std::sort(sampleVector.begin(), sampleVector.end(), Reorder);
    DisplayVector(sampleVector);

    std::cout << "\nVector Sorted in descendent order and added " << addValue << " to each value" << std::endl;
    std::for_each(sampleVector.begin(), sampleVector.end(), [addValue](int& n){return (n += addValue);});
    DisplayVector(sampleVector);


    return 0;
}
