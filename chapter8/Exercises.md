# Exercises

### 1. What is displayed when the following statement is executed?
```
int number = 3;
int *pNum1 = &number;
*pNum1 = 20;
int *pNum2 = pNum1;
number *= 2;
cout << *pNum2;
```

#### Answer:

```
The output of that program is 40

```

##
### 2. What are the similarities and differences between these overloaded functions:
```
int DoSomething(int num1, int num2)
int DoSomenthing(int& num1, int&num2)
int DoSomenthing(int* num1, int* num2)
```

#### Answer:
```
The first function receives num1 and num2 by value
The second function receives num1 and num2 by reference
The third function receives num1 and num2 by poiter
```

##
### 3. How would you change the declaration of pNum1 in Exercise1 at Line 1 to make the assignment at Line 3 invalid? (**Hint**: it is something to do with ensuring that **pNum1** con´t change the data pointed to)
#### Answer:
```
int const *pNum1 = &number;
```

##
### 4. 

##
### 5.

##
### 6. 

