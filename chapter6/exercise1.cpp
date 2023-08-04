#include <iostream>
int const ARRAY_SIZE = 10;

int main() {
    int dummy_array[ARRAY_SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i = ARRAY_SIZE-1; i >= 0; --i)
    {
        std::cout << dummy_array[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}
