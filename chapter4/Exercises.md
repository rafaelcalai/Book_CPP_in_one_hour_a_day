# Exercises

### 1. Declare an array that represents the square on the chessboard: the array should be an enum that defines the piece that may possibly occupy the squares. 
 *Hint:* The enum will contain enumerators (Pawn, Rook, Bishop, and so on), thereby limiting the range of the possible values that the elements in the array can hold. Don´t forget that a cell may be empty  
##
### 2. **BUG BUSTER:** What is wrong with this code fragment?
```
int myNumbers[5];
myNumber[5] = 450;
```
#### Answer:
```
The problems is that it is trying to assign 450 beyond the boundary of the array.
```
