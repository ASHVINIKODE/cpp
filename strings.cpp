#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name = "Ashvini";
    string lastName = "Bhagat";
    // cout << name << " " << lastName << endl;
    string fullName;
    fullName = name + " " + lastName;
    cout << fullName << endl;
    if (name == "Ashvi")
    {
        cout << "name matched" << endl;
    }
    else
    {
        cout << "name mismatched" << endl;
    }
    return 0;
}