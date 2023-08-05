#include<iostream>

using namespace std;

int main()
{
    unsigned int numToCalculate = 0;
    cout << "Please enter how many Fibonacci numbers you want at a time: ";
    cin >> numToCalculate;
    cout << "This program will calculate " << numToCalculate << " Fibonacci Numbers at a time" << endl;

    int num1 = 0, num2 = 1;
    char wantMore = '\0';
    cout << num1 << " " << num2;

    do
    {
        for(int count = 0; count <= numToCalculate; ++count)
        {
            cout << num1 + num2 << " ";
            int num2Temp = num2;
            num2 += num1;
            num1 = num2Temp;
        }
        cout << "\nDo you want more numbers (y/n)? ";
        cin >> wantMore;
    }while(wantMore == 'y');

    cout << "Goodbye!" << endl;
    return 0;
}