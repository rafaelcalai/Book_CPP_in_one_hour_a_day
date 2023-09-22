# Exercises

### 1. *BUG BUSTERS:* What is the error in the following code?
```
std::auto_ptr<SampleClass> object(new SampleClass());
std::auto_ptr<SampleClass> anotherObject(object);
object->DoSomething();
anotherObject->DoSomething();
```

#### Answer: 
```
auto_ptr is deprecated and it should not be used anymore.
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
#### Answer:
```
Is not allowed to copy from a unique_ptr
```
