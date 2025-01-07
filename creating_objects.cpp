#include <iostream>
using namespace std;

class Human
{
public:
    string name;
    void introduce()
    {
        cout << "hi " << name << endl;
    }
};
int main()
{
    Human ashi;
    Human *bunty = new Human();
    ashi.name = "ashi";
    ashi.introduce();
    bunty->name = "bunty";
    bunty->introduce();
    return 0;
}