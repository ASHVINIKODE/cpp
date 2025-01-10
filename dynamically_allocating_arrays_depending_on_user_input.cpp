#include <iostream>
using namespace std;
int main()
{
    int *pointer = NULL;
    cout << "how many items you are gonna enter" << endl;
    int input;
    cin >> input;
    pointer = new int[input];
    int temp;
    for (int counter = 0; counter < input; counter++)
    {
        cout << "enter the items" << counter + 1 << endl;
        cin >> temp;
        *(pointer + counter) = temp;
    }
    cout << "the items you have entered are" << endl;
    for (int counter = 0; counter < input; counter++)
    {
        cout << counter + 1 << " item is " << *(pointer + counter) << endl;
    }
    delete[] pointer;
    return 0;
}