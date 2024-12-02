#include<iostream>
using namespace std;
// Exception :Abnormal condition
// Exception handling: is used to avoid abnormal conditions 
int main()
{
    int a,b;
    cout<<"Enter 2 no\n";
    cin>>a>>b;
    try
    {
        if (b==0)
        {
            throw b;
        }
        cout<<a/b;
    }
    catch(int e)
    {
        cout<<"Denominator can not be zero";
    }
    cout<<"\ndone";
}