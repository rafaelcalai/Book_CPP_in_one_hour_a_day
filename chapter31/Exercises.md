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

#### Answer:
```
In order to be able to import AddsNums, the function has to be explicit marked with "export" as follow.
```
```
// module Interface file Calculations.ixx
export module Calculations;

export int AddNums(int a, int b)
{
  return (a + b);
}
```
