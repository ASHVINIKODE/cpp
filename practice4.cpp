#include <iostream>
#include <iomanip>

using namespace std;

class FDAccount
{
public:
    FDAccount(int fdno, string name, double amt, double interestRate = 5.0, int months)
    {
        this->fdno = fdno;
        this->name = name;
        this->amt = amt;
        this->interestRate = interestRate;
        this->months = months;

        calculateMaturityAmount();
    }

    void displayDetails()
    {
        cout << "FD Account Details:" << endl;
        cout << "FD No.: " << fdno << endl;
        cout << "Name: " << name << endl;
        cout << "Amount: " << amt << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
        cout << "Maturity Amount: " << maturityAmt << endl;
        cout << "No. of Months: " << months << endl;
    }

private:
    int fdno;
    string name;
    double amt, interestRate, maturityAmt;
    int months;

    void calculateMaturityAmount()
    {
        double interest = (amt * interestRate * months) / (12 * 100);
        maturityAmt = amt + interest;
    }
};

int main()
{
    int fdno, months;
    string name;
    double amt, interestRate;

    cout << "Enter FD No.: ";
    cin >> fdno;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Amount: ";
    cin >> amt;
    cout << "Enter Interest Rate (optional, default is 5.0): ";
    cin >> interestRate;
    cout << "Enter No. of Months: ";
    cin >> months;

    FDAccount fdAccount(fdno, name, amt, interestRate, months);
    fdAccount.displayDetails();

    return 0;
}