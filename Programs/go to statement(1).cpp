#include<iostream>
using namespace std;
int main()
{
    int n,a=1;
    cout<<"enter a number "<<endl;
    cin>>n;
    table:
    cout<<n<<"*"<<a<<"="<<n*a<<endl;
    a++;
    if(a<=10)
    {
        goto table;
    }
}