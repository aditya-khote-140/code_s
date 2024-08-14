#include<iostream>
using namespace std;
class Thread{
    int a,b;

    public:
    // Create a function ( void type ) and function name is " input " 
    void input(){
        cout <<"Enter the value of the variable A and B : " << endl;
        cin >> a >> b;
    }
    // we call Friend function :

    friend void swap (Thread);   // Declaration of friend function.
    
};

void swap (Thread ob){
    cout << "After swapping"<<endl;
    ob.a = ob.a+ob.b;
    ob.b = ob.a-ob.b;
    ob.a = ob.a-ob.b;

    cout <<"A is : "<<ob.a<<endl<<"B is : "<<ob.b;
}

int main () {
    Thread c;
    c.input ();
    swap (c);

    return 0;
}
