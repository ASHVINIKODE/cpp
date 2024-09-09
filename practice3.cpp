#include <iostream>
#include <iomanip>

using namespace std;

class TimeConverter
{
public:
    TimeConverter(int seconds)
    {
        this->seconds = seconds;
        hours = seconds / 3600;
        minutes = (seconds % 3600) / 60;
        seconds = seconds % 60;
    }

    void displayTime()
    {
        cout << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds << endl;
    }

private:
    int seconds, hours, minutes;
};

int main()
{
    int seconds;
    cout << "Enter time in seconds: ";
    cin >> seconds;

    TimeConverter timeConverter(seconds);
    timeConverter.displayTime();

    return 0;
}