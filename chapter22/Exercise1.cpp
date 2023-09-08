#include <iostream>
#include <vector>

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

    std::cout << "Original Vector" << std::endl;
    std::vector<int> sampleVector {1251 , 33, 55, 12, 79, 25, 11, 35, 17, 39, 44, 100, 99};
    DisplayVector(sampleVector);

    std::cout << "\nVector Sorted" << std::endl;
    std::sort(sampleVector.begin(), sampleVector.end());
    DisplayVector(sampleVector);

    std::cout << "\nVector Sorted in descendent order" << std::endl;
    std::sort(sampleVector.begin(), sampleVector.end(), Reorder);
    DisplayVector(sampleVector);



    return 0;
}
