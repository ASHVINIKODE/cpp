#include <iostream>
using namespace std;
void add(int, int);
void add(int, int, int);
void add(int, double);
int main()
{
    add(2, 3);
    add(2, 4, 5);
    add(2, 3.0);
    return 0;
}
void add(int a, int b)
{
    cout << "\n add" << a + b;
}
void add(int a, int b, int c)
{
    cout << "\n add" << a + b + c;
}
void add(int a, double b)
{
    cout << "\n add" << a + b;
}