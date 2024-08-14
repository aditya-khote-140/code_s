// #include<iostream>
// using namespace std;
// class demos
// {
//     public:
//     void sum(int a, int b)
// };
// void demos::sum(int a,int b)
// {
// cout<<"result = "<<a+b;
// }
// int main()
// {
//     demos ob;
//     ob.sum(2,7);
//     return 0;
// }

#include <iostream>

class Demo
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
};

int main()
{
    Demo obj;
    std::cout << "Result: " << obj.add(2, 7) << std::endl;
    return 0;
}