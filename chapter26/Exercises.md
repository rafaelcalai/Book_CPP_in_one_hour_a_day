# Exercises

### 1. *BUG BUSTERS:* What is the error in the following code?
```
std::auto_ptr<SampleClass> object(new SampleClass());
std::auto_ptr<SampleClass> anotherObject(object);
object->DoSomething();
anotherObject->DoSomething();
```

##
### 2. Use the **unique_ptr** class to instantiate a **Carp** that inherits from **Fish**. Pass the object as a **Fish** pointer and comment on slicing, if any.

##
### 3. *BUG BUSTERS:* What is the error in the following code?
```
std::unique_ptr<Tuna> myTuna(new Tuna);
unique_ptr<Tuna> copyTuna;
copyTuna = myTuna;
```
