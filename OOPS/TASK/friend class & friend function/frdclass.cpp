// with the help of friend class we can access the private data member and private member function of any class outside of it provided that the friend class should be declared inside of it
// example ATM
#include<iostream>
using namespace std;
class sbi
{
    int amount = 10000;
    void info()
    {
        cout<<"Customer of SBI ";
    }
    friend class axis;
};
class axis
{
    public:void show(sbi s)
    {
        cout<<"Balance = "<<s.amount<<"\n";
        s.info();
    }
};
int main()
{
    sbi s1;
    axis a;
    a.show(s1);
}