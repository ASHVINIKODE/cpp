// nested structure and dot operator
#include <iostream>
using namespace std;
struct address
{
    int house_no;
    string street_name;
    string district;
    string state;
};
struct person
{
    string name;
    char sex;
    int age;
    address addr;
};
int main()
{

    person anil, niya;
    anil.name = "Anil Sharma";
    anil.sex = 'M';
    anil.age = 22;
    anil.addr.house_no = 32;
    anil.addr.street_name = "M G Road";
    anil.addr.district = "Raipur";
    anil.addr.state = "Chhattisgarh";

    cout << "Name->" << anil.name << endl;
    cout << "sex->" << anil.sex << endl;
    cout << "Age->" << anil.age << endl;
    cout << "Address->" << "House no.-" << anil.addr.house_no << "," << anil.addr.street_name << "," << anil.addr.district << "," << anil.addr.state << endl;

    niya.name = "Niya Thawait";
    niya.sex = 'F';
    niya.age = 20;
    niya.addr.house_no = 78;
    niya.addr.street_name = "talwandi Road";
    niya.addr.district = "Raigarh";
    niya.addr.state = "Chhattisgarh";

    cout << "Name->" << niya.name << endl;
    cout << "sex->" << niya.sex << endl;
    cout << "Age->" << niya.age << endl;
    cout << "Address->" << "House no.-" << niya.addr.house_no << "," << niya.addr.street_name << "," << niya.addr.district << "," << niya.addr.state << endl;
    return 0;
}