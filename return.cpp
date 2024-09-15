#include <iostream>
using namespace std;
bool check(int);
int main()
{
    if (check(8))
        cout << "you are adult" << endl;
    else
        cout << "you are kid" << endl;
    return 0;
}
bool check(int age)
{
    if (age >= 18)
        return true;
    else
        return false;
}