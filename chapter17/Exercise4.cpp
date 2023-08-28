/*
 * 4. Write and application that initializes a dequeue to the following three strings: "Hello", "Containers are cool!",
 * and "C++ is evolving!".You must display the strings using a generic function that would work for a deque of any kind.
 * Your application needs to demonstrate the use of list initialization introduced in C++11 and the operator"",
 * which was introduced in C++14.
 */

#include<iostream>
#include<deque>

template <typename T>
void PrintMessage(const T& message)
{
    std::deque copyMessage(message);
    while(!copyMessage.empty())
    {
        std::cout << copyMessage.front() << " ";
        copyMessage.pop_front();
    }
    std::cout << std::endl;
}

int main()
{
    std::deque<std::string> dequeMessage {"Hello", "Containers are cool!", "C++ is evolving!"};
    PrintMessage(dequeMessage);
    return 0;
}

