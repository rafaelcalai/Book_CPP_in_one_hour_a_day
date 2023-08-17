# Exercises

### 1. In what order the constructors invoked for the class *Platypus*, as shown in Listining 10.10
```
#include<iostream>
using namespace std;

class Mammal
{
	public:
		void FeedBabyMilk()
		{
			cout << "Mammal: Baby says glug!" << endl;
		}
};

class Reptile
{
	public:
		void SplitVenom()
		{
			cout << "Reptile: Shoo enemy! Spits venom!" << endl;
		}
};

class Bird
{
	public:
		void LayEggs()
		{
			cout << "Bird: Laid my eggs, am ligther now!" << endl;
		}
};

class Platypus: public Mammal, public Bird, public Reptile
{
	public:
		void Swim()
		{
			cout << "Platypus: Voila, Ican seim! " << endl;
		}
};

int main()
{
	Platypus realFreak;
	realFreak.LayEggs();
	realFreak.FeedBabyMilk();
	realFreak.SplitVenom();
	realFreak.Swim();
	
	return 0;
}
```

#### Answer:
```
## Constructor order:
Mammal constructor
Bird constructor
Reptile constructor
Platypus constructor

## Destructor order:
Platypus destructor
Reptile destructor
Bird destructor
Mammal destructor
```
##

### 2. Show how classes *Polygon*, *Triangle* and *Shape* are related to each other:
#### Answer:
```
Shape is the base class with sides and length 
Triangle is a subclass that uses 3 sides and length 
Polygon is a subclass that uses multiple sides and length
```

##
### 3. The class D2 inherits from class D1 which inherits from class Base. To keep D2 from accessing the public members in Base class, what access specifier would you use, and where would you use it?

#### Answer:
```
# inherits from Base as private
class D1: private Base
{
	....
};
```
##
### 4. What is the nature of inheritance with this code snippet? Would your answer be different if *Derived* were a *struct* instead?
```
class Derived: Base
{
	// ... Derived members
};
```

#### Answer:
```
The nature is private as it is the default access for classes.
 
 If Derived were a struct instead, it would access as public.
```
##

### 5 **BUG BUSTERS:** What is the problem in this code?
```
class Derived: public Base
{
	// ... Derived members
};

void SomeFunc (Base Value)
{
	// ...
}
```

#### Answer:
```
It is being copy by value instead of by reference. For correct use of polymorphism  derivd classes must pass by reference or pointer avoiding slicing.
```





