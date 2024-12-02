// pointer varaible doesn't accept the value but it will always accept the address 
// pointer variable takes memory but the reference variable doesn't have a separate address 
//pointer is used for dymanic user input
#include<iostream>
using namespace std;
int main()
{
    int a=10;//normal
    int *p;//pointer variable
    p=&a;//address of a is stored in p
    cout<<"value of a is "<<a<<endl;      //value
    cout<<"address of a is  "<<&a<<endl; //address
    cout<<"value of p is "<<p<<endl;    //address
    cout<<"value of *p is "<<*p<<endl; //value // dereferencing
    return 0;
}