#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three different number ";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"the largest numbner is "<<a<<endl;
    }
    else if (b>a && b>c)
    {
        cout<<"the largest number is "<<b<<endl;
    }
    else
    {
        cout<<"the largest number is "<<c<<endl;
    }
}