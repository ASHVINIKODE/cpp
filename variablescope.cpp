#include <iostream>
using namespace std;
void display();
int x = 100;
int main()
{
    cout << x << endl;
    display();
    return 0;
}
void display()
{
    int a = 10, b = 20;
    cout << x << endl;
    cout << a << " " << b << endl;
}
