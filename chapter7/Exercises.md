# Exercises

### 1. Write an overload function that calculate the volume of a sphere and of a cylinder. The formulas are as follows:
```
volume of sphere = (4 * PI * radius * radius * radius) / 3
volume of cylinder = PI * radius * radius * height
```

### 2. Write a function that accepts an array of double as input
##

### 3. **BUG BUSTERS:** What is wrong with the following code?
```
#include <iostream>

using namespace std;

void Area (double radius, double result)
{
    result = Pi * radius * radius;
}
int main()
{
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;
    
    double areaFetched = 0;
    Area(radius, areaFetched);
    
    cout << "The area is:" << areaFetched << endl;
    return 0;
    
    return 0;
}
```

#### Answer:
```
The areaFetched should be passed by reference instead of by values for the Area function
```
##

### 4. **BUG BUSTERS:** What is wrong with the following function declaration?
```
double Area(double Pi = 3.14, double radius)
```
#### Answer:
```
The default variable must be at the end not at the begining
```
### 5. Write a function with return *void* that still helps the caller calculate the area and circumference of a circle when the radius is supplied.
