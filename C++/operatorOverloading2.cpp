#include<iostream>
using namespace std;

class Thread{
    public: 
    int a;
    Thread(){
        a=0;
    }

    void input(){
        cout << "Enter the value of 'a': ";
        cin >> a;
    }

    void operator++(){
        a=++a;
    }

    void output(){
        cout<<"Enter the value of 'a': "<<a<<endl;
    }
};

int main(){
    Thread ob;
    ob.input();
    ++ob;

    ob.output();
    return 0;
}