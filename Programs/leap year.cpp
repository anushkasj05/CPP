#include<iostream>
using namespace std;
int main()
{
    int d;
    cout<<"enter the year ";
    cin>>d;
    if((d%4==0 && d%100!=0) || d%400==0)
    {
        cout<<"it is a leap year";
    }
    else
    {
        cout<<"it is not a leap year";
    }
}