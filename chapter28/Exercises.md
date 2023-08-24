# Exercises

### 1. *BUG BUSTERS:* What is wrong with the following code?
```
class SomeIntelligentStuff
{
  bool isStuffGoneBad;
public:
  ~SomeIntelligentStuff()
  {
    if(isStuffGoneBad)
    {
      throw "Big problem in this class, just FYI";
    }
  }
};
```

##
### 2. *BUG BUSTERS:* What is wrong with the following code?
```
int main()
{
  int* millionNums = new int[1000000];
  // do something with the million integer

  delete[] millionNums;
}
```
