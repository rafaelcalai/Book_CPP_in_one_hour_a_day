# Exercises

### 1. Program a conversion operator for class **Date** that converts the date it holds into an integer
```
class Date
{
private:
    int day, month, year;
public:
    Date( int inMonth, int inDay, int inYear) : month(inMonth), day(inDay), year(inYear) {}

    Date& operator ++ () // prefix increment
    {
        ++day;
        return *this;
    }
    Date& operator -- ()
    {
        --day;
        return *this;
    }
    void displayDate() const
    {
        std::cout << month << "/" << day << "/" << year << std::endl;
    }
};
```


##
### 2. Program a move constructor and move assignment operator for the class *DynamicFlats* that encapsulates a dynamically allocated array in the for of a private member *float** 
