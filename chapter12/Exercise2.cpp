#include <iostream>
#include <algorithm>

class Date {
private:
    int day, month, year;
    float *myNums;
public:
    Date(int inMonth, int inDay, int inYear) : month(inMonth), day(inDay), year(inYear) { myNums = new float;}

    Date &operator=(const Date &src) {
        if (src.myNums != myNums)
        {
            if (myNums)
            {
                delete myNums;
            }
            day = src.day;
            month = src.month;
            year = src.year;
            myNums = new (float);
            std::copy(src.myNums, src.myNums + 1, myNums);
        }
        return *this;
    }

    Date &operator++() // prefix increment
    {
        ++day;
        return *this;
    }

    Date &operator--() {
        --day;
        return *this;
    }

    explicit operator int() const {
        return (month * 1000000) + (day * 10000) + year;
    }

    void displayDate() const {
        std::cout << month << "/" << day << "/" << year << std::endl;
    }
};


int main() {
    Date date(8, 22, 2023);

    std::cout << "Display (8, 22, 2023) ++date" << std::endl;
    ++date;
    date.displayDate();

    std::cout << "Display --date" << std::endl;
    --date;
    date.displayDate();

    std::cout << "Display (09, 15, 2023) date2" << std::endl;
    Date date2( 9, 15, 2023);
    date2.displayDate();

    std::cout << "Display date and date2 after date2 copy " << std::endl;
    date = date2;
    date.displayDate();
    date2.displayDate();

    std::cout << "Convert  the date to an int value" << std::endl;
    std::cout << date.operator int();

    return 0;
}
