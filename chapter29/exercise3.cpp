// Compose a view that consist of the square of three element takes from the end of a collection.

#include <iostream>
#include <ranges>
#include <vector>
#include <cmath>

template<typename T>
void Display(const T& inVector, const std::string& text)
{
    std::cout << text << std::endl;
    for (const auto& num : inVector)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}


int main() {

    std::vector<int> baseVector {0, 1, 2, 3, 4, 5, 9};
    auto baseView = baseVector | std::views::drop(baseVector.size() - 3) | std::views::transform([] (auto num){return std::sqrt(num);});

    Display(baseVector, "BaseVector" );
    Display(baseView, "BaseView");

    return 0;
}
