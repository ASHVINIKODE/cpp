#include <iostream>
#include <string>

using namespace std;

class HumanBeing
{
public:
    string name;
    void introduce()
    {
        cout << "Hii I am " << name << endl;
        ;
    }
};
int main()
{
    HumanBeing anil, anjali;
    anil.name = "anil";
    anil.introduce();
    anjali.name = "anjali";
    anjali.introduce();
    return 0;
}