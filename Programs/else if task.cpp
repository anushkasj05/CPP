#include<iostream>
using namespace std;

int main()
{
    int n;
    float bill , serviceCharge , totalBill ;

    cout << "Enter the electricity consumption in units: ";
    cin >> n;

    if (n <= 100 && n>=0)
    {
        bill = n * 5;
    }
    else if (n <= 500 && n>=101)
    {
        bill = 100 * 5 + (n - 100) * 7;
    }
    else if (n>500)
    {
        bill = 100 * 5 + 400 * 7 + (n - 500) * 10;
    }
    else
    {
        cout<<"invalid meter reading";
    }
    serviceCharge = bill * 0.2;
    totalBill = bill + serviceCharge;

    cout << "Electricity Bill: Rs. " << bill << endl;
    cout << "Service Charge: Rs. " << serviceCharge << endl;
    cout << "Total Bill: Rs. " << totalBill << endl;

    return 0;
}