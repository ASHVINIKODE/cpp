#include <iostream>
using namespace std;
void add(int, int);
void add(int, int, int);
void add(int, double);
void display();
void display(string name);
int main()
{
    add(2, 3);
    add(2, 4, 5);
    add(2, 3.0);
    display();
    display("anil");
    return 0;
}
void add(int a, int b)
{
    cout << "\n add" << a + b << endl;
}
void add(int a, int b, int c)
{
    cout << "\n add" << a + b + c << endl;
}
void add(int a, double b)
{
    cout << "\n add" << a + b << endl;
}
void display()
{
    cout << "hii whatsup" << endl;
}
void display(string name)
{
    cout << "hii whatsup " << name << endl;
}