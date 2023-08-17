# Exercises

### 1. **BUG BUSTERS:** What is wrong with the class declaration?
```
Class Human
{
  int age;
  string name;
  public:
    Human(){}
}
```

#### Answer:
```
/*
Class is with capital letter
string is missing std::
missin ´;´ at the end of class
*/
// class fixed
class Human
{
  int age;
  std::string name;
  public:
    Human(){}
};
```

##
### 2. How would the user of class in Exercise 1 access the member Human::age?

#### Answer:
```
// As age is private, is necessary to write methods to access age
class Human
{
  int age;
  std::string name;
  public:
    Human(){}
    int getAge()
    {
      return age;  
    }
    void setAge(int _age)
    {
      age = _age;    
    }
};
```

##
### 3. Write a better version of class in Exercise 1 that initializaes all parameters using an initialization list in the constructor:
```
class Human
{
  int age;
  std::string name;
  public:
    Human(int _age = 30, std::sting _name = ""): age(_age), name(_name){ }
    int getAge()
    {
      return age;  
    }
    void setAge(int _age)
    {
      age = _age;    
    }
};
```

##
### 4. write a *Circle* class that computes the area and circumference, given a radius that is supplied to the clas as a parameter at the time of instantiation. Pi should be contained in a constant private member that can not be accessed from outside the circle.

