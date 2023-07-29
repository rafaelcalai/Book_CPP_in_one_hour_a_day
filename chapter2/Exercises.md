# Exercises

### 1. *BUG BUSTER.* Enter this program and compile it. Why does it fail? How can you fix it?
```
#include <iostream>
int main()
{
    std::Cout << Is there a bug here?";
    return 0;
}
```
### Answer: 
```
The problem is that "C" is upper case in "Cout" and there is missing " in the string.
```
##
### 2. Fix the bug in Exercise 1 and recompile, link and run it.
### Answer:
```
Is there a bug here?
```
##
### 3. Modify Listing 2.4 to demonstrate subtraction (using -) and multiplication (using *).
```
#include <iostream>
using namespace std;

// Declare a function
int DemoConsoleOutput();

int main()
{
    // Call i.e. invoke the function
    DemoConsoleOutput();
    
    return 0;
}

int DemoConsoleOutput()
{
    cout << "This is a simple string literal" << endl;
    cout << "Writing number five " << 5 << endl;
    cout << "Performing division 10 / 5 = " << 10 / 5 << endl;
    cout << "Pi is 22 / 7 = " << 22.0 / 7 << endl;
    return 0;
}
```
### Answer:
```
This is a simple string literal
Writing number five 5
Performing division 10 / 5 = 2
Pi is 22 / 7 = 3.14286
Performing subtraction 100 - 35 = 65
Performing multiplication 77 * 3 = 231
```
