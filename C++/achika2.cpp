#include<iostream>
using namespace std;
class student
{
    public:
    int rollno;
    char name [20];
    void getData ()
    cout<<"enter rollno:";
    cin>>rollno;
cout<<"enter name:";
cin>>name;
}
void printData ()
{
    cout<<"Roll No="<<rollno <<"\t Name="<<name;
}

int main()
{
    student ob;
ob.getData();
ob.printData();
return 0;
}