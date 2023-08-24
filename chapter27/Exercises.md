# Exercises

### 1. *BUG BUSTERS:* What is the error in the following code?
```
fstream myFile;
myFile.open("HelloFile.txt", ios_base::out);
myFile << "Hello File!";
myFile.close();
```

##
### 2. *BUG BUSTERS:* What is the error in the following code?
```
ifstream myFile("SomeFile.txt");
if(myFile.is_open())
{
  myFile << "This is some text" << endl;
  myFile.close();
}
```
