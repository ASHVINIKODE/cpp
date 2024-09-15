#include <iostream>
using namespace std;
int main()
{
    char input = 'a';
    switch (input)
    {
    case 'A':
    case 'a':
    {
        cout << "Excellent" << endl;
    }
    break;

    case 'B':
    case 'b':
    {
        cout << "Very Good" << endl;
    }
    break;
    case 'C':
    case 'c':
    {
        cout << "Good" << endl;
    }
    break;
    case 'D':
    case 'd':
    {
        cout << "Not Bad" << endl;
    }
    break;
    case 'E':
    case 'e':
    {
        cout << "Fail" << endl;
    }
    break;
    default:
    {
        cout << " better luck next time ! " << endl;
    }
    break;
    }
    cout << "Done Grading" << endl;
    return 0;
}