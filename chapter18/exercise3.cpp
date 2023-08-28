#include<list>
#include<vector>
#include<iostream>

int main()
{
    const std::list<int> baseList {1, 2, 3, 4, 5};
    std::vector<int> baseVector;

    for(const auto value : baseList)
    {
        baseVector.insert(baseVector.end(), value);
    }

    std::cout << "Printing the values in the vector: ";
    for(const auto value : baseVector)
    {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}