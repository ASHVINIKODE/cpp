#include <iostream>
using namespace std;
void display(int x, int y = 30, int z = 10)
{
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;
    cout << "z is " << z << endl;
}
int main()
{
    display(20);
    return 0;
}