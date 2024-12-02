/*
parameterized constructor

we can create a parameterized coinstructor by using  either one parameter or more than one parameter 
if a program contains more than one constructor is called a constructor overloading 
*/
#include<iostream>
using namespace std;
class atm
{
    int code,pwd;
public: atm(int c,int p)
{
    code=c;
    pwd=p;
}
atm()
{
    cout<<"Welcome to my ATM"<<endl;
}
void show()
{
    cout<<"code "<<code<<endl;
    cout<<"pwd "<<pwd<<endl;
}
};
int main()
{
    atm d;
    atm a(123,456);
    a.show();
}