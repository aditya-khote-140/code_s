#include <iostream>
using namespace std;
class privatedemo
{
    int a;

public:
    void set(int h)
    {
        a = h;
    }
    int get()
    {
        return a;
    }
};
int main()
{
    privatedemo ob; // corrected
    int u = 10;     // variable declaration
    ob.set(u);
    cout << ob.get();
    return 0;
}