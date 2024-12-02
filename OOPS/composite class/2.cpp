#include<iostream>
using namespace std;
class Base{
    public:Base()
    {
        cout<<" Constructor 1";
    }
    ~Base()
    {
        cout<<" Deconstructor 2";
    }
};
class Derived1:public Base{
    public:Derived1()
    {
        cout<<"Constructor 2";
    }
    ~Derived1(){
        cout<<" Deconstructor 2";
    }
};
class Derived2:public Base{
    public:Derived2()
    {
        cout<<"Constructor 3";
    }
    ~Derived2(){
        cout<<"Deconstructor 3";
    }
};
int main()
{
    Derived1 d1;
    Derived2 d2;
}