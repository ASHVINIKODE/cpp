// passing structure to function by value,pointer(address)
#include <iostream>
using namespace std;
struct person
{
    string name;
    int age;
    char sex;
};
void display(person s);
void show(person *s);

int main()
{
    person shivam = {"Shivam Jain", 22, 'M'};
    show(&shivam);
    cout << endl;
    display(shivam);

    return 0;
}
void display(person s)
{
    cout << s.name << endl;
    cout << s.age << endl;
    cout << s.sex << endl;
    s.name = "shruti Gupta";
}
void show(person *s)
{
    cout << s->name << endl;
    cout << s->age << endl;
    cout << s->sex << endl;
    s->name = "shruti Gupta";
}