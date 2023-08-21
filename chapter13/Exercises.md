# Exercises

### 1. *BUG BUSTERS:* What is the problem in the following code?
```
void DoSomething(Base* objBase)
{
  Derived* objDer = dynamic_cast<Derived*>(objBase);
  objDer->DerivedClassMethod();
}
```

### 2. You have a pointer *objFish** that points to an object of class **Tuna**:
```
Fish* objFish = new Tuna;
Tuna* objTuna = <what cast?>objFish;
```

#### What cast would you use to get a pointer to *Tuna** to point to this object of type *Tuna*? Demonstrate using code.
