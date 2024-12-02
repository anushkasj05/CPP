#include<iostream>
using namespace std;
// int d=100;//global
// variable cannot be redefined but can be reassigned 
/*
special operators
-> :: scope resolution operator
->    sizeof()
-> &  reference / address operator 
-> * dereferencing 
*/
int main()
{
/*int a=90;//local
int d=12;
cout<<a<<endl;
cout<<d<<endl;//local
cout<<::d;//global*/

/*int a=200;
int d=a;
cout<<a<<endl;
cout<<&d<<endl;*/

// reference variable is the aliasing name of previous variable

int a=200;
int &d=a;
cout<<a<<endl;
cout<<d<<endl;
cout<<&a<<endl;
cout<<&d<<endl;
}