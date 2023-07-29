# Exercises
##
### 1. Look at the following program and try to guess what it does without running it:<br />
```
   int main() {
   int x = 8, y = 6;
   std::cout << std::endl;
   std::cout << x - y << " " << x * y << " " << x + y;
   std::cout << std::endl;
   return 0;
   }
```
### Answer:
```

2 48 14
```
##
### 2. Type in the program from Exercise 1 and then compile and link it. What does it do? Does it do what you guessed?
### Answer:
```

2 48 14
```
##
### 3. What do you think is the error in the following code?
```
include<iostream>
int main()
{
    std::cout << "Hello buggy world " << std::endl;
    return 0;
}
```
### Answer:
```
missing '#' before include
#include<iostream>
```
##
### 4. Fix the program in the Exercise 3 compile, link and run the program. What does it do?
### Answer:
```
Hello buggy world 
```