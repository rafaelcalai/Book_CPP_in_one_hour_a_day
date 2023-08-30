# Exercises

### 1. *BUG BUSTERS:* If you replace Line 20 in Listining 29.8 with the following code, it won´t compile:
Listining 29.8
```{.cpp .numberLines}
#include <ranges>
#include <vector>
#include <iostream>
using namespace std;

template <ranges::view T>
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

#### Answer:
```
It is not going to work because DisplayView has a constrain of receiving as argument just ranges::view and if I pass a "num" it is not a ranges::view

template <ranges::view T>
void DisplayView(T& view)
```

##
### 2. What changes would you need to make to the declaration of **DisplayView** so that the code in Listining 29.8, with the change shown in Exercise 1, will compile?

#### Answer:
```
As every view is a range, it's necessary to change view for range on tamplate
```

```c++
#include <ranges>
#include <vector>
#include <iostream>
using namespace std;

template <ranges::range T>
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

  cout << "DisplayView with nums: ";  
  DisplayView(nums);    
  
  return 0;
} 
```

##
### 3. Compose a view that consist of the square of three element takes from the end of a collection.
