# Exercises

### 1. Extend the telephone directory example in the lesson to find a person´s name, given a phone number.(**Hint:** Adjust the operators < and == and ensure that items are sorted and compared according to phone numbers)
```
#include <set>
#include <iostream>
#include <string>

using namespace std;

template <typename T>
void DisplayContents (const T& container)
{
    for (auto iElement = container.cbegin(); iElement != container.cend(); ++iElement)
        cout << *iElement << endl;
}

struct ContactItems{
    string name;
    string phoneNum;
    string displayAs;
    
    
    ContactItems(const string& nameInit, const string& phone)
    {
        name = nameInit;
        phoneNum = phone;
        displayAs = (name + " " + phone);
    }
    
    bool operator == (const ContactItems& itemToCompare) const
    {
        return (itemToCompare.name == this->name);
    }
    
    bool operator <(const ContactItems& itemToCompare) const
    {
        return (this->name < itemToCompare.name);
    }
    
    operator const char*() const
    {
        return displayAs.c_str();
    }
};


int main()
{
    set<ContactItems> setContacts;
    setContacts.insert(ContactItems("Oprah Winfrey", "+1 7889 879 879" ));
    setContacts.insert(ContactItems("Bill Gates", "+1 97 7897 8799 8" ));
    setContacts.insert(ContactItems("Angi Merkel", "+49 23456 5466" ));
    setContacts.insert(ContactItems("Vlad Putin", "+7 6645 4564 797" ));
    setContacts.insert(ContactItems("Jhon Travolta", "91 234 4564 798" ));
    setContacts.insert(ContactItems("Angelina Jolie", "+1 745 641 314" ));
    DisplayContents(setContacts);
    
    cout << "Enter the name you wish to delete: ";
    string inputName;
    getline(cin, inputName);
    
    auto contactoFound = setContacts.find(ContactItems(inputName, ""));
    if(contactoFound != setContacts.end())
    {
        setContacts.erase(contactoFound);
        cout << "Displaying the content after delete " << inputName << endl;
        DisplayContents(setContacts);
    }
    else
    {
        cout << "Contact not found!" << endl;
    }
    return 0;
}


```
##
### 2. Define a multiset to store entered words and their meanings; that is, make a multiset work as a dictionary.(**Hint:** the multiset should be a structure that contains two strnigs: the word and it´s meanig)

##
### 3. Demonstrate via a simple program that a set cannot accept duplicated entries. Whereas a multiset can.
