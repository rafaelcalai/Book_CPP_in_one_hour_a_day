# Exercises

### 1. *BUG BUSTERS:* If you replace Line 20 in Listining 29.8 with the following code, it won´t compile:
Listining 29.8
```
#include <ranges>
#include <vector>
#include <iostream>
using namespace std;

template <randes::view T>
void DisplayView(T& view)
{
  for (auto element : view)
    cout << element << " ";
  cout << endl;
}

int main()
{
  vector<int> nums{1, 5, 202, -99, 42, 50};
  auto viewAllElements = nums | std::views::all;
  cout << "View all elements in a collection: ";
  DisplayView(viewAllElements);

  auto lambdaIsEven = [](auto num) {return ((num % 2) == 0);};
  auto viewEvenInRev = nums | views::reverse | views::filter(lambdaIsEven);
  cout << "View even in reverse order: ";
  DisplayView(viewEvenInRev);

  auto viewEveninReverseTopTwo = nums | views::reverse | views::filter(lambdaIsEven) | views::take(2);
  cout << "View first two even numbers in reverse order: ";
  DisplayView(viewEveninReverseTopTwo);
  
  return 0;
}

```

```
DisplayView(nums);
```
### Why is the case?

##
### 2. What changes would you need to make to the declaration of **DisplayView** so that the code in Listining 29.8, with the change shown in Exercise 1, will compile?

##
### 3. Compose a view that consist of the square of three elements takens from the end of a collection.
