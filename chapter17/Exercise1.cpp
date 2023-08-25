#include <iostream>
#include <vector>


int main() {
    std::vector<int> inputData;
    char operation = 'i';
    int value = 0, index = 0;

    while(true)
    {
        std::cout << "\nEnter: \n\"q\" for QUERY \n\"i\" for INSERT \n\"x\" to EXIT: ";
        std::cin >> operation;

        switch (tolower(operation))
        {
            case 'i':
                std::cout << "Please enter a value to be inserted: ";
                std::cin >> value;
                inputData.push_back(value);
                break;
            case 'q':
                std::cout << "Please enter the index to be query: ";
                std::cin >> index;
                if((inputData.size() > index) && (!inputData.empty()))
                {
                    std::cout << inputData[index] << std::endl;
                }
                else
                {
                    std::cout << "Invalid index, vector size: " << inputData.size() << std::endl;
                }
                break;
            case 'x':
                std::cout << "Exiting the program!" << std::endl;
                exit(0);
            default:
                std::cout << "Invalid operation!" << std::endl;
        }
    }
}
