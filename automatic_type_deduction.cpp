#include <iostream>
using namespace std;
int main()
{
    auto age = 10;
    cout << age << endl;
    // range based for loop
    int marks[] = {66, 55, 22, 88, 99, 77, 44, 11, 00};
    for (int var : marks)
    {
        cout << var << endl;
    }
    return 0;
}