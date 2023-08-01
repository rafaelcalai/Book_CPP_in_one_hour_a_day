# Exercises

### 1. Modify enum _YourCards_, to demonstrate that the value of _Queen_ can be 45.
```
enum YourCards {Ace, Jack, Queen, King};
```

##
### 2. Write a program that demonstrates that the size of an unsigned integer and a normal integer are the same and both are smaller than a long integer.

##
### 3. Write a program to calculate the area and circumference of a circle where the radius is supplied by the user.

##
### 4. In exercise 3. If the area and circumference were to be stored in integer. How would the output be any different?
#### Answer:
```
The output would have only integer part. 62.8419 would be 62
```
##
### 5. **BUG BUSTER** What is wrong with the following initialization?
```
auto age;
```
#### Answer:
```
To use auto properly is necessary to initalize the variable. 
Whitout initialization the compiler is not able to infer the type of the variable.
```