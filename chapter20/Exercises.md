# Exerises

### 1. You need to write an application that works as a telephone directory where the names of the people need not to be unique. What container whould you choose? Write a definition of the container

##
### 2.2 The following is a **map** template definition in your dictionary application:
```
map<wordProperty, string, fPredicate> mapWordDefinition;

//Where WordProperty is a structure:
struct WordProperty
{
  string word,
  bool isLatinBase;
};
````
#### Define the binary predicate **fPredicate**, wich helps the map sort a key of type **WordProperty** according to the string attribute it contains.

##
### 3. Demonstrate via a simple program that a map cannot accept duplicate entries, whereas a multimap can.
