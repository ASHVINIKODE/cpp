#include <iostream>
using namespace std;
int main()
{
    int date;
    cout << "enter the date:" << endl;
    cin >> date;
    if (date > 0)
    {
        if (date < 32)
        {
            cout << "entered date is valid" << endl;
            if (date == 12)
            {
                cout << "date is special" << endl;
            }
        }
        else
        {
            cout << "entered date is not valid" << endl;
        }
    }

    return 0;
}