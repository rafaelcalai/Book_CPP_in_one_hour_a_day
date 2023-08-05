#include <iostream>

void print_array(double my_array[], int array_size);

int main()
{
    int const ARRAY_SIZE = 5;
    double my_array[ARRAY_SIZE] = {0.25, 0.50, 0.75, 1.00, 1.25};

    print_array(my_array, ARRAY_SIZE);

    return 0;
}

void print_array(double my_array[], int array_size)
{
    for(int i = 0; i < array_size; ++i)
    {
        std::cout << my_array[i] << " ";
    }
}