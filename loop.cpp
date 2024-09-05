#include <iostream>
using namespace std;
int main()
// {
//     int counter = 1;
//     while (counter <= 30)
//     {
//         cout << counter << "->learn coding" << endl;
//         counter++;
//     }
//     return 0;
// }
{
    char input;
    do
    {
        cout << "wecome to the coding world" << endl;
        cout << "This is where you can find awesome codes" << endl;
        cout << "enter x to exit or any other key to see this message again" << endl;
        cin >> input;
    } while (input != 'x');
    cout << "exit" << endl;
    return 0;
}