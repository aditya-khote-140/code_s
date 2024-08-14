#include <iostream>
#include <string>

class Person
{
public:
    void inputName()
    {
        cout << "Enter name: ";
        cin >> name;
    }

    void inputAddress()
    {
         cout << "Enter address: ";
         cin >> address;
    }

    void displayData()
    {
         cout << "Name: " << name << "\n";
         cout << "Address: " << address << "\n";
    }

 
    string name;
    string address;
};

int main()
{
    int n;
    cout << "Enter Size : "<< endl;
    cin >> n;
    Person persons[n];

    for (int i = 0; i < n; i++)
    {
        using namespace std;
        cout << "Person " << i + 1 << ":\n";
        persons[i].inputName();
        persons[i].inputAddress();
    }

    for (int i = 0; i < n; i++)
    {
        using namespace std;
        cout << "Person " << i + 1 << ":\n";
        persons[i].displayData();
    }

    return 0;
}