#include <iostream>

class Circle
{
    private:
        const double Pi = 3.14159265359;
        double radius;
    public:
        Circle(double _radius): radius(_radius){}
        
        double circumference()
        {
            return 2 * Pi * radius;
        }
        
        double area()
        {
            return Pi * radius * radius;
        }
};

int main()
{
    double radius = 0;
    
    std::cout << "Please enter the radius to calculate Area and circumference: ";
    std::cin >> radius;
    Circle circle(radius);
    
    std::cout << "The Area of the circle is: \t\t" << circle.area() << std::endl;
    std::cout << "The circumference of the circle is: \t" << circle.circumference() << std::endl;
    
    return 0;
}
