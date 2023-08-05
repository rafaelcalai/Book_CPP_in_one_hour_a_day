# Exercises

### 1. Write a for loop to access the elements in a array in the reverse order
##

### 2. Write a nested loop equivalent to listing 6.14 that adds elements in two arrays but in reverse order
```
#include <iostream>

int main()
{
    const int ARRAY1_LEN = 3;
    const int ARRAY2_LEN = 2;

    int myNums1[ARRAY1_LEN] = {35, -3, 0};
    int myNums2[ARRAY2_LEN] = {20, -1};

    std::cout << "Multiplying each int in myNums1 by each int in myNums2: " << std::endl;
    for (int index1 = 0; index1 < ARRAY1_LEN; ++index1)
        for (int index2 = 0; index2 < ARRAY2_LEN; ++index2)
            std::cout << myNums1[index1] << " x " <<  myNums2[index2] << " = "
                        << myNums1[index1] * myNums2[index2] << std::endl;
    return 0;
}
```
##

### 3. Write a program similar to Listing 6.16 that displays Fibonacci numbers but that ask the user how many number she wants to compute
##
```
#include<iostream>

using namespace std;

int main()
{
    const int numToCalculate = 5;
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
```
### 4. Write a switch-case construct that tells whether a color is in the rainbow. Use enumerated constant.
##

### 5. **BUG BUSTERS:** What is wrong with the following code? 
```
for(int counter = 0; conter=10; ++counter)
    cout << counter << endl;
```
##
#### Answer:
```
There is a mistake in the condition, should be <= 
for(int counter = 0; conter<=10; ++counter)
```
##

### 6. **BUG BUSTERS:** What is wrong with the code?
```
int loopCounter = 0;
while(loopCounter < 5);
{
    cout << loopCounter << " ";
    loopCounter++;
}
```
##
#### Answer:
```
There is a ";" after while, it is equal to an empty while that will block the code in this line as the while will be always true
```
##

### 7. **BUG BUSTERS:** What is wrong with the code?
```
cout << "Enter a number between 0 and 4" << endl;
int input = 0;
cin >> input;
switch(input)
case 0:
case 1:
case 2:
case 3:
case 4: 
cout << "Valid input" << endl
defoult:
    cout << "Invalid input" << endl
```
##
#### Answer:
```
I would prefer to use a if statment here instead of switch
The proble is that there is no open and close curly brackets in the switch case 
```
##
