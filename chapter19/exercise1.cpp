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
        return (itemToCompare.phoneNum == this->phoneNum);
    }

    bool operator <(const ContactItems& itemToCompare) const
    {
        return (this->phoneNum < itemToCompare.phoneNum);
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

    cout << "Enter the phone number you wish to delete: ";
    string inputPhone;
    getline(cin, inputPhone);

    auto contactoFound = setContacts.find(ContactItems("", inputPhone));
    if(contactoFound != setContacts.end())
    {
        setContacts.erase(contactoFound);
        cout << "Displaying the content after delete " << inputPhone << endl;
        DisplayContents(setContacts);
    }
    else
    {
        cout << "Contact not found!" << endl;
    }
    return 0;
}