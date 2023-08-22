#include <iostream>

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

    explicit operator int() const
    {
        return (month  * 1000000) + (day * 10000) + year;
    }
    void displayDate() const
    {
        std::cout << month << "/" << day << "/" << year << std::endl;
    }
};


int main() {
    Date date( 8, 22, 2023);

    ++date;
    date.displayDate();

    --date;
    date.displayDate();

    std::cout << date.operator int();

    return 0;
}
