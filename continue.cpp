#include <iostream>
using namespace std;
int main()
// {
//     int counter;
//     for (counter = 1; counter <= 10; counter++)
//     {
//         if (counter == 5)
//         {
//             continue;
//         }

//         cout << counter << endl;
//     }
// }
{
    int counter = 1;
    while (counter <= 10)
        if (counter == 5)
        {
            counter++;
            continue;
        }
    {
        cout << counter << endl;
        counter++;
    }
    return 0;
}