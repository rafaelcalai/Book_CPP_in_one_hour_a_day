#include<iostream>
using namespace std;
int main()
{
    int* pointToAnInt = new int;
    int* pNumberCopy = pointToAnInt;
    *pNumberCopy = 30;
    cout << *pointToAnInt;
    delete pointToAnInt;
    return 0;
}