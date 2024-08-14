// // Single inheritance :
// #include <iostream>
// using namespace std;

// class Animal
// {
// public:
//     void sound()
//     {
//         cout << "Animal makes a sound" << endl;
//     }
// };

// class Dog : public Animal
// {
// public:

//     void bark()
//     {
//         cout << "Dog barks" << endl;
//     }
// };

// int main()
// {
//     Dog obj;
//     obj.sound(); 
//     obj.bark();  
//     return 0;
// }



// Multilevel inheritance :

#include <iostream>
using namespace std;

class A
{
public:
    void display1()
    {
        cout << "A class\n" ;
    }
};

class B
{
public:
    void display2()
    {
        cout << "B class\n" ;
    }
};

class C : public A, public B
{
public:
    void display()
    {
        cout << "Last class\n" ;
    }
};

int main()
{
    C obj;
    obj.display();  
    obj.display1(); 
    obj.display2(); 
    return 0;
}




// Multilevel Inheritance :

// #include <iostream>
// using namespace std;

// class Animal //Parent class
// {
// public:
//     void sound()
//     {
//         cout << "Animal makes a sound" << endl;
//     }
// };

// class Dog : public Animal
// {
// public:
//     void bark()
//     {
//         cout << "Dog barks" << endl;
//     }
// };

// class Labrador : public Dog
// {
// public:
//     void color()
//     {
//         cout << "Labrador is golden in color" << endl;
//     }
// };

// int main()
// {
//     Labrador obj;
//     obj.sound(); 
//     obj.bark();   
//     obj.color();  
//     return 0;
// }
