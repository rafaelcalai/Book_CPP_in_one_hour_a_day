#include <iostream>

int main()
{
    const int ARRAY1_LEN = 3;
    const int ARRAY2_LEN = 2;

    int myNums1[ARRAY1_LEN] = {35, -3, 0};
    int myNums2[ARRAY2_LEN] = {20, -1};

    std::cout << "Multiplying each int in myNums1 by each int in myNums2: " << std::endl;
    for (int index1 = ARRAY1_LEN; index1 >= 0; --index1)
    {
        for (int index2 = ARRAY2_LEN; index2 >= 0; --index2)
        {
            std::cout << myNums1[index1] << " + " << myNums2[index2] << " = "
                      << myNums1[index1] + myNums2[index2] << std::endl;
        }
    }
    return 0;
}