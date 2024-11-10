// we use two operators to allocate and deallocate the memory dynamically.The one is called new operator and another one is called delete operator.
#include <iostream>
using namespace std;
int main()
{
    int *pointer;
    pointer = new int;
    // cout << pointer << endl;
    *pointer = 25;
    cout << *pointer << endl;
    delete pointer;

    return 0;
}