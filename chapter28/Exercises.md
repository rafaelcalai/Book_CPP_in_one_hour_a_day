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

#### Answer:
```
throw an exception in a destructor is not considered best practises eventhough it is possible. 

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

#### Answer:
```
It´s being allocated a big memory without use of try: catch:, if the memory is not allocated it will crash the program.
```

##
### *BUG BUSTERS:* What is wrong with the following code?
````c++
int main()
{
  try
  {
    int* millionNums = new int[1000000];
    //do somehting with the million integers.

    delete[] millionNums;
  }
  catch
  {
    int* anotheMillionNums = new int[1000000];
    // take back up of millionNums and save it to the disk.
  }
}
```
### Answer:
´´´
allocation memory should not be used inside a catch of exception.
´´´
