/*
 Write a program to calculate the area and circumference of a circle where the radius is supplied by the user.
 */
#include <iostream>
#include <cmath>

double circumference_calc (double r);
double area_calc (double r);

int main()
{
    double radius = 0, area = 0, circumference = 0;
    std::cout << "Area and circumference calculator!" << std::endl;
    std::cout << "Please enter the value of radius: ";
    std::cin >> radius;

    circumference = circumference_calc(radius);
    area = area_calc(radius);
    std::cout << "The are is: " << area << " and the circumference is: " << circumference << std::endl;
    return 0;
}

double circumference_calc (double r){
    return 2 * M_PI * r;
}

double area_calc (double r){
    return M_PI * r * r;
}