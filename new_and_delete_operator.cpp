#include <iostream>
using namespace std;
int main()
{
    int *pointer;
    pointer = new int;
    // cout << pointer;
    *pointer = 24;
    cout << *pointer;
    delete pointer;
    return 0;
}