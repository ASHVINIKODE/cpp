// collection of different variables of different types
//basics of structures
#include <iostream>
using namespace std;
struct student
{
    string name;
    int rollno;
    char sex;
} anil, ashmit; // global variable
int main()
{
    student rahul, ajay = {"Anil Verma", 1111, 'M'}; // local variable
    rahul.name = "Rahul Jha";
    rahul.rollno = 2222; // using dot operator
    rahul.sex = 'M';
    anil.name = "Anil Singh";
    anil.rollno = 3333;
    anil.sex = 'M';
    ashmit.name = "Ashmit Roy";
    ashmit.rollno = 4444;
    ashmit.sex = 'M';
    cout << "Name-->" << anil.name << endl
         << "Roll no.-->" << anil.rollno << endl
         << "Sex-->" << anil.sex << endl;
    cout << "Name-->" << ashmit.name << endl
         << "Roll no.-->" << ashmit.rollno << endl
         << "Sex-->" << ashmit.sex << endl;
    cout << "Name-->" << rahul.name << endl
         << "Roll no.-->" << rahul.rollno << endl
         << "Sex-->" << rahul.sex << endl;
    cout << "Name-->" << ajay.name << endl
         << "Roll no.-->" << ajay.rollno << endl
         << "Sex-->" << ajay.sex << endl;
    return 0;
}