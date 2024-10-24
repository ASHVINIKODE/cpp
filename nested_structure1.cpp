// nested structure and arrow operator
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
    // address addr;
    address *addr;
};
int main()
{
    person anil;
    person *anilptr;
    anilptr = &anil;
    anilptr->name = "Anil Sharma";
    anilptr->sex = 'M';
    anilptr->age = 32;
    // anilptr->addr.house_no = 56;
    // anilptr->addr.street_name = "Brigade Road";
    // anilptr->addr.district = "Ranchi";
    // anilptr->addr.state = "Jharkhand";
    address adr = {56, "Brigade Road", "Ranchi", "Jharkhand"};
    anilptr->addr = &adr;

    cout << "Name->" << anilptr->name << endl;
    cout << "sex->" << anilptr->sex << endl;
    cout << "Age->" << anilptr->age << endl;
    // cout << "Address->" << "House no.-" << anilptr->addr.house_no << "," << anilptr->addr.street_name << "," << anilptr->addr.district << "," << anilptr->addr.state << endl;
    cout << "Address->" << "House no.-" << anilptr->addr->house_no << "," << anilptr->addr->street_name << "," << anilptr->addr->district << "," << anilptr->addr->state << endl;

    person rashi;
    person *rashiptr;
    rashiptr = &rashi;
    rashiptr->name = "Rashi Mehra";
    rashiptr->sex = 'F';
    rashiptr->age = 28;
    // rashiptr->addr.house_no = 116;
    // rashiptr->addr.street_name = "Vigyaan Nagar";
    // rashiptr->addr.district = "Dhanbaad";
    // rashiptr->addr.state = "Jharkhand";
    address adrr = {116, "Vigyaan Nagar", "Dhanbaad", "Jharkhand"};
    rashiptr->addr = &adrr;

    cout << endl;
    cout << "Name->" << rashiptr->name << endl;
    cout << "sex->" << rashiptr->sex << endl;
    cout << "Age->" << rashiptr->age << endl;
    cout << "Address->" << "House no.-" << rashiptr->addr->house_no << "," << rashiptr->addr->street_name << "," << rashiptr->addr->district << "," << rashiptr->addr->state << endl;
    return 0;
}
