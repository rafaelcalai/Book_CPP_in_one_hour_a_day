#include <iostream>
class Shape
{
public:
    virtual void Print() = 0;
    virtual double Area() = 0;
    virtual ~Shape() = default;
};

class Triangle : public Shape
{
private:
    double base, height, area;
public:
    Triangle(double inputBase, double inputHeight, double inputArea = 0) :
                base(inputBase), height(inputHeight), area(inputArea){}
    void Print() override
    {
        std::cout << "The area of the Triangle is: " << area << std::endl;
    }
    double Area() override
    {
        area = base * height / 2;
        return area;
    }
};

class Circle : public Shape
{
private:
    const double PI =  3.14159265359;
    double radius, area = 0;
public:
    explicit Circle(double inputRadius) : radius(inputRadius){}
    double Area() override
    {
        area = PI * radius * radius;
        return area;
    }
    void Print() override
    {
        std::cout << "The Area of the Circle is: " << Area() << std::endl;
    }

};

int main()
{
    Triangle triangle(10, 5);
    triangle.Area();
    triangle.Print();

    Circle circle(12.5);
    circle.Area();
    circle.Print();

    return 0;
}