#include <iostream>
#include <cmath>


//volume of cylinder = PI * radius * radius * height
double volume (double radius, double height)
{
    return M_PI * radius * radius * height;
}

//volume of sphere = (4 * PI * radius * radius * radius) / 3
double volume (double radius)
{
    return (4 * M_PI * radius * radius * radius)/3;
}

int main()
{
    while(true)
    {
        std::cout << "Please enter the number for the action that you want:" << std::endl;
        std::cout << "0 - Exit" << "\n1 - Cylinder Volume" << "\n2 - Sphere volume" << std::endl;
        int option = 0;
        std::cin >> option;
        double radius = 0, height = 0, volume_Fetched = 0;

        switch(option)
        {
            case 0:
                return 0;
            case 1:
            {
                std::cout << "Enter radius: ";
                std::cin >> radius;
                std::cout << "Enter height: ";
                std::cin >> height;
                volume_Fetched = volume(radius, height);
                break;
            }
            case 2:
            {
                std::cout << "Enter radius: ";
                std::cin >> radius;
                volume_Fetched = volume(radius);
                break;
            }
            default:
                std::cout << "Wrong value" << std::endl;
        }

        std::cout << "The Volume is: " << volume_Fetched << std::endl;
        for (int i = 0 ; i < 25; ++i)
            std::cout << "-";
        std::cout << "\n\n";
    }
}