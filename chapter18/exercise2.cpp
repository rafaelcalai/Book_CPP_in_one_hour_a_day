#include <iostream>
#include <list>

int main()
{
    std::list<int> dummyList {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Demonstrate that interator continues valid even after one insertion" << std::endl;

    auto testIterator = dummyList.front();
    std::cout << "Value of iterator before push a value to the list: " << testIterator << " Address that it points to: " << &testIterator << std::endl;

    dummyList.push_front(-1);
    std::cout << "Value of iterator after push a value to the list: " << testIterator << " Address that it points to: " << &testIterator << std::endl;

    std::cout << "Printing the final list:" << std::endl;
    for(auto const number: dummyList)
    {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}