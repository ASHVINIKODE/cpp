// arrow operator with pointer to access structure member
#include <iostream>
using namespace std;
struct student
{
    string name;
    int rollno;
    char sex;
};
int main()
{
    student anil, riya, shreya, dev;
    student *anilptr;
    anilptr = &anil;
    anil.name = "Anil Verma"; // using dot operator
    anilptr->rollno = 1234;   // using arrow operator
    anilptr->sex = 'M';
    cout << anilptr->name << endl;
    cout << anilptr->rollno << endl;
    cout << anilptr->sex << endl;

    student *riyaptr;
    riyaptr = &riya;
    riya.name = "Riya Mishra"; // using dot operator
    riyaptr->rollno = 1235;    // using arrow operator
    riyaptr->sex = 'F';
    cout << riyaptr->name << endl;
    cout << riyaptr->rollno << endl;
    cout << riyaptr->sex << endl;

    student *shreyaptr;
    shreyaptr = &shreya;
    shreya.name = "Shreya Chabbra"; // using dot operator
    shreyaptr->rollno = 1236;       // using arrow operator
    shreyaptr->sex = 'F';
    cout << shreyaptr->name << endl;
    cout << shreyaptr->rollno << endl;
    cout << shreyaptr->sex << endl;

    student *devptr;
    devptr = &dev;
    dev.name = "Dev Rathod"; // using dot operator
    devptr->rollno = 1237;   // using arrow operator
    devptr->sex = 'M';
    cout << devptr->name << endl;
    cout << devptr->rollno << endl;
    cout << devptr->sex << endl;

    return 0;
}