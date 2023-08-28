#include<list>
#include<iostream>

template<typename T>
void PrintList(const T& messageList)
{
    std::cout << "Printing the List: " << std::endl;
    for(const auto value : messageList)
    {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}


int main()
{
    std::list<std::string> baseList {
            "quilt", "rainbow", "sun", "tree",  "elephant",
            "flower", "apple", "hat", "iguana", "jacket",
            "kiwi", "lemon", "grape", "moon", "orange",
            "pencil", "banana", "carrot", "dog", "nest"
    };

    std::cout << "Before sort!" << std::endl;
    PrintList(baseList);

    baseList.sort();
    std::cout << "\nAfter sort!" << std::endl;
    PrintList(baseList);

    baseList.reverse();
    std::cout << "\nAfter reverse!" << std::endl;
    PrintList(baseList);
    return 0;
}