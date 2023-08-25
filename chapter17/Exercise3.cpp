#include <iostream>
#include <vector>
#include <algorithm>

struct Package{
protected:
    static int uniqueId;
public:
    int id;
    double width{};
    double length{};
    double height{};
    Package()
    {
        id = uniqueId++;
    }
};
int Package::uniqueId = 0;

int main() {

    std::vector<Package> inputData;
    std::vector<Package>::iterator it;
    char operation = 'i';
    int index = 0;

    std::cout << "Hi Jack, enter your package dimensions:" << std::endl;

    while(true)
    {
        std::cout << "\nEnter: \n\"q\" to QUERY \n\"i\" to INSERT \n\"p\" to PRINT all \n\"x\" to EXIT: ";
        std::cin >> operation;

        switch (tolower(operation))
        {
            case 'i':
            {
                auto* package = new Package;
                std::cout << "Please enter the width value to be inserted: ";
                std::cin >> package->width;
                std::cout << "Please enter the length value to be inserted: ";
                std::cin >> package->length;
                std::cout << "Please enter the height value to be inserted: ";
                std::cin >> package->height;
                inputData.push_back(*package);
                std::cout << "Package inserted, ID: " << package->id << std::endl;
                break;
            }
            case 'q':
                std::cout << "Please enter the index to be query: ";
                std::cin >> index;
                if((inputData.size() > index) && (!inputData.empty()))
                {
                    std::cout << "ID: " << inputData[index].id << "\tWidth: " << inputData[index].width
                              << "\tHeight: " << inputData[index].height << "\tLength: " << inputData[index].length << std::endl;
                }
                else
                {
                    std::cout << "Invalid index, vector size: " << inputData.size() << std::endl;
                }
                break;
            case 'p':
            {
                std::cout << "---------------------------Printing all packages-----------------------------------" << std::endl;
                std::cout << "-----------------------------------------------------------------------------------" <<std::endl;
                for(auto package: inputData)
                {
                    std::cout << "ID: " << package.id << "\tWidth: " << package.width
                                << "\tHeight: " << package.height << "\tLength: " << package.length << std::endl;
                }
                std::cout << "-----------------------------------------------------------------------------------" <<std::endl;
                break;
            }
            case 'x':
                std::cout << "Exiting the program!" << std::endl;
                exit(0);
            default:
                std::cout << "Invalid operation!" << std::endl;
        }
    }
}
