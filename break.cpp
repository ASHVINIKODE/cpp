#include <iostream>
using namespace std;
int main()
{
    int counter;
    for (counter = 1; counter <= 5; counter++)
    {
        // cout << counter << endl;
        // if (counter == 5)
        // {
        //     break;
        // }
        int innercounter;
        for (innercounter = 1; innercounter <= 3; innercounter++)
        {
            cout << innercounter << endl;
            if (innercounter == 2)

                break;
        }
    }
    return 0;
}
