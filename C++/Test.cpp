#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating\n";
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking\n";
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Cat is meowing\n";
    }
};

int main()
{
    Dog dog;
    Cat cat;

    dog.eat();
    cat.eat();

    dog.bark();
    cat.meow();

    return 0;
}




// #include <iostream>
// using namespace std;

// int x;

// // Function  

// void input(){
//     cout << "Enter Number : ";
//     cin >> x;
// }
// void display()
// {
//     // Accessing global variable using scope resolution operator
//     cout << "Global x = " << ::x << endl;
// }

// int main()
// {
//     // Call the function
//     input();
//     display();

//     return 0;
// }
