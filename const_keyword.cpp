// const keyword with functions and array
#include <iostream>
using namespace std;
void display(const int num[], int limit);
int main()
{
    // const int pi=3.14;
    int number[] = {22, 45, 56, 12, 43};
    display(number, 5);
    return 0;
}
void display(const int num[], int limit)
{
    for (int counter = 0; counter < limit; counter++)
    {
        cout << num[counter] << endl;
    }
}