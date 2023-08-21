# Exercises

### 1. Extend the telephone directory example in the lesson to find a person´s name, given a phone number.(**Hint:** Adjust the operators < and == and ensure that items are sorted and compared according to phone numbers)
```
#include<iostream>
#include<unordered_set>

using namespace std;

template<typename T>
void DisplayContents(const T& cont)
{
  cout << "Unordered set contains: "
  for (auto element = cont.begin(); element != cont.cend(); ++element)
  {
    cout << *element << ' ';
  }
  cout << endl;

  cout << "Number of elements, size() = " << cont.size() << endl;
  cout << "Bucket Count = " << cont.bucket_count() << endl;
  cout << "Max load factor = " << cont.max_load_factor() << endl;
  cout << "Load Factor: " << cont.load_factor() << endl;  
}

int main()
{
  unordered_set<int> usetInt {1 ,-3, 2017, 300, -1, 989, -300, 9};
  DisplayContents(usetInt);
  usetInt.insert(999);
  DisplayContents(usetInt);

  cout << "Enter int you want to check for existence in set: ";
  int input = 0;
  cin >> input;
  auto elementFound = usetInt.find(input);

  if(elementFound != usetInt.end())
  {
    cout << *elementfound << " found in set" << endl;
  }
  else
  {
    cout << input << " not available in set" << endl;
  }

  return 0;
}

```
##
### 2. Definea multiset to store entered words and their meanings; that is, make a multiset work as a dictionary.(**Hint:** the multiset should be a structure that contains two strnigs: the word and it´s meanig)

##
### 3. Demonstrate via a simple program that a set cannot accept duplicated entries. Whereas a multiset can.
