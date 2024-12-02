#include<iostream>
using namespace std;
int main()
{
    int a,d;
    a=12;
    d=5;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of d is "<<d<<endl;
    a=a+d;//17
    d=a-d;//12
    a=a-d;//5
    cout<<"the new value of a is "<<a<<endl;
    cout<<"the new value of d is "<<d<<endl;
}