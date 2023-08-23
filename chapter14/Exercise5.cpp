#include<iostream>

template<typename Array1Type, typename Array2Type>
class GenericClass
{
private:
    static const int arraySize = 10;
    Array1Type array1[arraySize] = {};
    Array2Type array2[arraySize] = {};
public:

    Array1Type GetArray1Element (unsigned int index)
    {
        if(index <= arraySize)
        {
            return array1[index];
        }
    }

    void SetArray1Element (Array1Type value, unsigned int index)
    {
        if(index <= arraySize)
        {
            array1[index] = value;
        }
    }

    Array1Type GetArray2Element (unsigned int index)
    {
        if(index <= arraySize)
        {
            return array2[index];
        }
    }

    void SetArray2Element (Array2Type value, unsigned int index)
    {
        if(index <= arraySize)
        {
            array2[index] = value;
        }
    }

    void DisplayArray1()
    {
        for (auto x : array1)
        {
            std::cout << x << " ";
        }
    }

    void DisplayArray2()
    {
        for (auto x : array2)
        {
            std::cout << x << " ";
        }
    }
};


int main()
{
    GenericClass<double, int> test;
    test.SetArray1Element(10.12, 0);
    test.SetArray1Element(23.5, 1);

    std::cout << "Display Array1" << std::endl;
    test.DisplayArray1();

    for (int count = 0; count < 10; ++count)
    {
        test.SetArray2Element(count * 17, count);
    }

    std::cout << "\nDisplay Array2" << std::endl;
    test.DisplayArray2();
    return 0;
}

