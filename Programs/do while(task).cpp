#include<iostream>
using namespace std;
int main()
{
    int a , d=1 ;
    cout<<"Enter the number for generating the table "<<endl;
    cin>>a;
    do
    {
        cout<<a<<"*"<<d<<"="<<a*d<<endl;
        d++;
    } while (d<=10);
    
}