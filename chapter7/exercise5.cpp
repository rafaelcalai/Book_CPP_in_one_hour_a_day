#include <iostream>
#include <cmath>

using namespace std;

void Area (double radius, double &result)
{
    result = M_PI * radius * radius;
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
}