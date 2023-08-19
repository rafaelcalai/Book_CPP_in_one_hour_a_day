# Exercises

### 1. What is displayed when the following statement is executed?
```
int number = 3;
int *pNum1 = &number;
*pNum1 = 20;
int *pNum2 = pNum1;
number *= 2;
cout << *pNum2;
```

#### Answer:

```
The output of that program is 40

```

##
### 2. What are the similarities and differences between these overloaded functions:
```
int DoSomething(int num1, int num2)
int DoSomenthing(int& num1, int&num2)
int DoSomenthing(int* num1, int* num2)
```

#### Answer:
```
The first function receives num1 and num2 by value
The second function receives num1 and num2 by reference
The third function receives num1 and num2 by poiter
```

##
### 3. How would you change the declaration of pNum1 in Exercise1 at Line 1 to make the assignment at Line 3 invalid? (**Hint**: it is something to do with ensuring that **pNum1** con´t change the data pointed to)
#### Answer:
```
int const *pNum1 = &number;
```

##
### 4. *BUG BUSTERS:* Whats is wrong with this code?
```
#include<iostream>
using namespace std;

int main ()
{
    int *pointToAnInt = new int;
    pointToAnInt = 9;
    cout << "The Value at pointToAnInt : " <<  *pointToAnInt;
    delete pointToAnInt;

    return 0;
}
```
#### Answer:
```
It is passing a value instead of an address to the pointer pointToAnInt.
```
##
### 5. *BUG BUSTERS:* What is wrong with this code?
```
#include<iostream>
using namespace std;
int main()
{
    int* pointToAnInt = new int;
    int* pNumberCopy = pointToAnInt;
    *pNumberCopy = 30;
    cout << *pointToAnInt;
    delete pNumberCopy;
    delete pointToAnInt; 
    return 0;
}
```

#### Answer:
```
The memory is being deallocating twice as pNumberCopy points to the address of allocated to pointToAnInt
```

##
### 6. What is the output of the program in Exercise 5 when that program is correct?
#### Answer:
```
The output would be: 30
```

