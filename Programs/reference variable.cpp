// reference variable is used to refer the address of the previous variable .
//it doesn't occupy any space or we can say that it is the alliasing name of the previous variable.
#include<iostream>
using namespace std;
//wap of dynamic array
int main()
{
    int n=10;
    int &c=n;//reference variable
    cout<<"c"<<c<<endl;
    cout<<"n"<<n<<endl;
    c++;
    cout<<"c"<<c<<endl;
    cout<<"n"<<n<<endl;
    n++;
    cout<<"c"<<c<<endl;
    cout<<"n"<<n<<endl;
}