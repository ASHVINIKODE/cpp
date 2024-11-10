// user defined data type similar to structures but in union we can only store the value in onlu one member at a time thats because the memory is shared between the members of the union unlike the structures where each structure members has allocated its own memory but in unions the memory is shared between all the union members.
#include <iostream>
using namespace std;
union emp
{
    int id;
    float sal;
} anil, rashmit;
int main()
{
    emp anjali, ayaan;
    anjali.id = 25;
    anjali.sal = 30000;
    ayaan.sal = 55000;
    ayaan.id = 33;
    cout << ayaan.sal << endl;
    cout << ayaan.id << endl;
    cout << anjali.id << endl;
    cout << anjali.sal << endl;
    return 0;
}