# Exercises

### 1. *BUG BUSTERS:* What is the problem in the following code?
```
void DoSomething(Base* objBase)
{
  Derived* objDer = dynamic_cast<Derived*>(objBase);
  objDer->DerivedClassMethod();
}
```
#### Answer:
```
After dynamic cast is necessary to check if any error occoured.
void DoSomething(Base* objBase)
{
    Derived* objDer = dynamic_cast<Derived*>(objBase);
    if(objDer)
    {
        // dynamic_cast worked properly 
         objDer->DerivedClassMethod();
    }
    else
    {
        // something went wrong
    }
}   

```
##
### 2. You have a pointer *objFish** that points to an object of class **Tuna**:
```
Fish* objFish = new Tuna;
Tuna* objTuna = <what cast?>objFish;
```

#### Answer:
```
As I know that these types are compatible, I would use static_cast to avoid the overhead of dynamic_cast 
```
##
#### What cast would you use to get a pointer to *Tuna** to point to this object of type *Tuna*? Demonstrate using code.
##
```
int main()
{
    Fish* objFish = new Tuna;
    Tuna* objTuna = static_cast<Tuna*>objFish;
    
    objTuna->BecomeDineer();
    
    delete objfish;
    return 0;
}


```
