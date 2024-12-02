#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter a day (28, 29, 30, or 31): ";
    cin >> day;

    if (day == 28) 
    {
        cout << "The day " << day << " is in the month(s) of February";
    }
    else if (day == 29) 
    {
        cout << "The day " << day << " is in the month(s) of February (leap year).";
    } 
    else if (day == 30) 
    {
        cout << "The day " << day << " is in the month(s) of April, June, September, November.";
    } 
    else if (day == 31) 
    {
        cout << "The day " << day << " is in the month(s) of January, March, May, July, August, October, December.";
    } 
    else 
    {
        cout << "Invalid input. Please enter 28, 29, 30, or 31.";
    }

    return 0;
}