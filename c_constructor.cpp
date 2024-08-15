#include <iostream>
using namespace std;
class demo
{
    int a;

public:
    demo()
    {
        a = 10;
    }
    demo(demo &z)
    {
        a = z.a;
    }
    void putdata()
    {
        cout << "\n A" << a;
    }
};
int main()
// {
//     demo aa;
//     demo cc(aa);
//     aa.putdata();
//     cc.putdata();
//     return 0;
// }
{
    demo aa;
    demo bb(aa);
    aa.putdata();
    bb.putdata();
    return 0;
}