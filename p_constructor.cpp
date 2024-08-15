#include <iostream>
using namespace std;
class demo
{
    int a, b;

public:
    demo(int m, int n)
    {
        a = m;
        b = n;
    }
    void putdata()
    {
        cout << "\n a=" << a << "\n b=" << b << endl;
    }
};
int main()
{
    demo aa(5, 10);
    aa.putdata();
    return 0;
}