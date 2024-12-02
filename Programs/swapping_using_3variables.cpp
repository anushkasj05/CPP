#include<iostream>
using namespace std;
int main()
{
    int a,d,c;
    a=12;
    d=5;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of c is "<<d<<endl;
    c=a;
    a=d;
    d=c;
    cout<<"the new value of a is "<<a<<endl;
    cout<<"the new value of b is "<<d<<endl;
}