# Exercises

### 1. *BUG BUSTERS:* What is the error in the following code?
```
fstream myFile;
myFile.open("HelloFile.txt", ios_base::out);
myFile << "Hello File!";
myFile.close();
```

#### Answer:
```
Before using the file is necessary to check if it is really open.
```
```
fstream myFile;
myFile.open("HelloFile.txt", ios_base::out);
if(myFile.is_open())
{
  myFile << "Hello File!";
  myFile.close();
}
else
{
   std::cerr << "Error opening file!" << std::endl;
}


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

#### Answer: 
```
The file is being open with ifstream instead of ofstream.
```
