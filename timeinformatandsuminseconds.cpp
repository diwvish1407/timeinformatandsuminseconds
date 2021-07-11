#include <iostream>
using namespace std;
int hours, minutes, seconds, total_time;
int main()
{
    cout << "Enter the time : " << endl;
    cout << "Hours : ";
    cin >> hours;
lable1:
    cout << "Minutes : ";
    cin >> minutes;
    if (minutes < 0 || minutes > 60)
    {
        cout << "Please enter the value of minutes in between 0 & 60." << endl;
        goto lable1;
    }
lable2:
    cout << "Seconds : ";
    cin >> seconds;
    if (seconds < 0 || seconds > 60)
    {
        cout << "Please enter the value of minutes in between 0 & 60." << endl;
        goto lable2;
    }
    cout << "The time in proper formate HH:MM:SS is : " << endl;
    if (hours < 10)
    {
        cout << "0" << hours << ":";
    }
    else
    {
        cout << hours << ":";
    }
    if (minutes < 10)
    {
        cout << "0" << minutes << ":";
    }
    else
    {
        cout << minutes << ":";
    }
    if (seconds < 10)
    {
        cout << "0" << seconds << endl;
    }
    else
    {
        cout << seconds << endl;
    }
    cout << "Total time calculated in seconds is : ";
    total_time = (seconds) + (minutes * 60) + (hours * 3600);
    cout << total_time;
}
