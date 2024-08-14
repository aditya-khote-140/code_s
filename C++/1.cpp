#include <iostream>
using namespace std;

class student
{
public:
    int Class = 10;
    int Roll_no = 567;
    char name[20] = "Adyta";
    float marks = 23.8;



    student(){
        cout<<"Hello : "<<endl;
    }
};

int main()
{
    // Staticaly create constructor :
    
    student studentObject;
    cout<<"hello aditya"<<endl;


    // Dynomicaly create constructer :

    student *h1 = new student;
    student *h2 = new student;

    return 0;
}