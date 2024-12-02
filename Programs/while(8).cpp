#include<iostream>
using namespace std;
/* wap to get the common factors of the two numbers entered using while oop */
int main()
{
    int a,d,i;
    cout<<"enter the first number "<<endl;
    cin>>a;
    cout<<"enter the second number"<<endl;
    cin>>d;
    cout<<"the common factors for "<<a<<" and "<<d<<" are : "<<endl;
    for(i=1;i<=a;i++)
    {
        if(a%i==0 && d%i==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}