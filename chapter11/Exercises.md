# Exercises

### 1. Demonstrate an inheritance hierarchy that implements **Circle** and **Triangle** classes.

##
### 2. *BUG BUSTERS:* What is the problem in the following code?
```
class Vehicle 
{
    public:
        Vehicle() {}
        ~Vehicle() {}      
};

class Car: public Vehicle
{
    public:
        Car(){};
        ~Car(){};
};
```
#### Answer:
```
In class Vehicle the destructor must be virtual to guarantee  that the destructor of the derived class will be called
```

##
### 3. In the (uncorrected) code in Exercise 2,  What is the order of the execution for constructors if an instance of car is created and destroyed like this:
```
Vehicle myRacer = new Car;
delete myRacer
```
#### Answer:
```
Vehicle Constructor
Car Constructor
Vehicle destructor
```