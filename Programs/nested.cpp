#include<iostream>
using namespace std;
int main()
{
    int pwd,otp;
    cout<<"enter the password";
    cin>>pwd;
    if(pwd==2023)
    {
        cout<<"enter the otp";
        cin>>otp;
        if(otp==2024)
        {
            cout<<"owner";
        }
        else
        {
            cout<<"fraud";
        }
    }
    else
    {
        cout<<"password not matched";
    }return 0;
}