#include <iostream>
using namespace std;

class complexAddition
{
public:
    int real,image;
    complexAddition():
        real(0),image(0) {};

    void input()
    {
        cout << "Enter the value of the complex number (a + ib): " << endl;
        cout << "Real Part" << endl;
        cin >> real;
        cout << "Image Part" << endl;
        cin >> image;
    }

    complexAddition operator + (complexAddition& obj){
        complexAddition t1;
        t1.real = real + obj.real;
        t1.image = image + obj.image;
        return t1;
    }

    void output()
    {
        if (image < 0)
        {
            cout << real << image << "i";
        }
        else
        {
            cout << real << "+i" << image;
        }
    }
};

int main(){
    complexAddition c1,c2,c3;
    c1.input();
    c2.input();
    c3= c1+c2;
    c3.output();
    return 0;
}