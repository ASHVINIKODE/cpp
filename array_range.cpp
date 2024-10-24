// array range in functions
#include <iostream>
using namespace std;
void display(const int *start, const int *end);
int main()
{
    int numbers[] = {22, 55, 66, 77, 88, 99, 33, 44, 11};
    display(numbers, numbers + 9);
    return 0;
}
void display(const int *start, const int *end)
{
    const int *ptr;
    for (ptr = start; ptr != end; ptr++)
    {
        cout << *ptr << endl;
    }
}