// relationship between array and pointers
#include <iostream>
using namespace std;
int main()
{
    int number[6] = {22, 43, 67, 74, 21, 88};
    cout << *number << endl;
    cout << number[0] << endl;
    cout << *(number + 1) << endl;
    cout << number[1] << endl;
    cout << *(number + 2) << endl;
    cout << number[2] << endl;
    cout << *(number + 3) << endl;
    cout << number[3] << endl;
    cout << *(number + 4) << endl;
    cout << number[4] << endl;
    cout << *(number + 5) << endl;
    cout << number[5] << endl;
    return 0;
}