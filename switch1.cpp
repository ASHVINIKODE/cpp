#include <iostream>
using namespace std;
int main()
{
    int x = 220;
    switch (x)
    {
    case 10:
    case 20:
    case 30:
    {
        cout << x << " Case value 1 Satatements" << endl;
        break;
    }
    case 50:
    case 60:
    case 70:
    {
        cout << x << " Case value 2 Satatements" << endl;
        break;
    }
    case 100:
    case 110:
    case 120:

    {
        cout << x << " Case value 3 Satatements" << endl;
        break;
    }
    case 150:
    case 160:
    case 170:
    {
        cout << x << " Case value 4 Satatements" << endl;
        break;
    }
    case 200:
    case 210:
    case 220:
    {
        cout << x << " Case value 5 Satatements" << endl;
        break;
    }
    default:
        cout << "No case value statement" << endl;
    }
    return 0;
}