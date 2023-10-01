#include<set>
#include<iostream>

struct MyDictionary{
    std::string word;
    std::string description;
    std::string displayAs;


    MyDictionary(const std::string& wordIn, const std::string& descriptionIn)
    {
        word = wordIn;
        description = descriptionIn;
        displayAs = (word + ": " + description);
    }

    bool operator<(const MyDictionary& itemToCompare) const
    {
        return (this->word < itemToCompare.word);
    }

    operator const char*() const
    {
        return displayAs.c_str();
    }
};

template<typename T>
void DisplayMsgs(const T& container)
{
    for (auto iElement = container.cbegin(); iElement != container.cend(); ++iElement)
    {
        std::cout << *iElement << std::endl;
    }
}


int main()
{
    std::multiset<MyDictionary> dictionary;
    std::cout << "Multiset dictionary!" << std::endl;

    dictionary.insert(MyDictionary("car","a road vehicle with an engine, four wheels, and seats for a small number of people"));
    dictionary.insert(MyDictionary("impeachment","the act of making a formal statement that a public official might be guilty of a serious offence in connection with his or her job, especially in the US"));
    dictionary.insert(MyDictionary("establishment","a business or other organization, or the place where an organization operates"));
    dictionary.insert(MyDictionary("ninja","a Japanese fighter, especially in the past, who moves and acts without being seen and usually carries a short sword"));
    dictionary.insert(MyDictionary("glasses","two small pieces of special glass or plastic in a frame worn in front of the eyes to improve sight"));
    dictionary.insert(MyDictionary("glasses","a hard, brittle substance, typically transparent or translucent, made by fusing sand with soda and lime and cooling rapidly. It is used to make windows, drinking containers, and other articles"));

    DisplayMsgs(dictionary);
    return 0;
}