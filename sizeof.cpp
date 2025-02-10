#include <iostream>
using namespace std;
struct student
{
    int rollno;
    char sex;
    string name;
};
int main()
{
    int age;
    cout << "int-->" << sizeof(int) << endl;
    cout << "short int-->" << sizeof(short int) << endl;
    cout << "char-->" << sizeof(char) << endl;
    cout << "float-->" << sizeof(float) << endl;
    cout << "double-->" << sizeof(double) << endl;
    cout << "bool-->" << sizeof(bool) << endl;
    cout << "string-->" << sizeof(string) << endl;
    cout << "age-->" << sizeof(age) << endl;
    cout << "struct student-->" << sizeof(student) << endl;

    return 0;
}