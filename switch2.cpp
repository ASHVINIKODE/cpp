#include <iostream>
using namespace std;
int main()
{
    int x = 257;
    switch (x)
    {
    case 1 ... 99:
    {
        cout << "THe value " << x << " is in between 1 and 99" << endl;
        break;
    }
    case 100 ... 199:
    {
        cout << "THe value " << x << " is in between 100 and 199" << endl;
        break;
    }
    case 200 ... 299:
    {
        cout << "THe value " << x << " is in between 200 and 299" << endl;
        break;
    }
    }
    return 0;
}