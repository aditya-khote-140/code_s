#include<iostream>
using namespace std;

class a{
    public:
    int a=10;
    char name='aditya';
};
class b : public a{
    int bs=100;
};

int main(){
    b demo;
    demo.a;
    return 0;
}