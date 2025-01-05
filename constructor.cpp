#include <iostream>
#include <string>
using namespace std;
class Human
{
private:
    string name;
    int age;

public:
    Human()
    {
        name = "noname";
        age = 0;
        cout << "constructors is called when you creates an object of Human" << endl;
    }
    void display()
    {
        cout << name << endl
             << age << endl;
    }
};
int main()
{
    Human anil;
    anil.display();
    return 0;
}