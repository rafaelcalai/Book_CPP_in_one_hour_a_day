# Exercises

### 1. *BUG BUSTERS:* What is the error in the following code?

```
// module Interface file Calculations.ixx
export module Calculations;

int AddNums(int a, int b)
{
  return (a + b);
}
```

```
//main.cpp
import Calculations;
int main()
{
  int sum= AddNums(3 , 4);
  return 0;
}

```
