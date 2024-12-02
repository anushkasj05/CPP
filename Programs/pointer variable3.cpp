//double pointer
#include<iostream>
using namespace std;
int main()
{
    int a=10; //normal variable  
    int *d=&a; //pointer variable
    int **d1=&d;//pointer to pointer //a pointer that is holding the value of another pointer
    cout<<a<<endl;
    cout<<*d<<endl;
    cout<<**d1<<endl;
    return 0;
}