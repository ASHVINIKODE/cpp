#include <iostream>
#include <cmath>

using namespace std;

double calculateEMI(double principal, double annualInterestRate, int loanTenureYears)
{
    double monthlyInterestRate = annualInterestRate / 12 / 100;
    int loanTenureMonths = loanTenureYears * 12;

    double emi = (principal * monthlyInterestRate * pow(1 + monthlyInterestRate, loanTenureMonths)) /
                 (pow(1 + monthlyInterestRate, loanTenureMonths) - 1);

    return emi;
}

int main()
{
    double principal, annualInterestRate;
    int loanTenureYears;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the annual interest rate (in percentage): ";
    cin >> annualInterestRate;

    cout << "Enter the loan tenure in years: ";
    cin >> loanTenureYears;

    double emi = calculateEMI(principal, annualInterestRate, loanTenureYears);

    cout << "The EMI is: " << emi << endl;

    return 0;
}
