#include<iostream>
using namespace std;
class atm
{
    public:atm(int cardno)
    {
        cout<<"card no is "<<cardno<<endl;
    }
};
class customer:public atm
{
    public:customer(int c,int p):atm(c)
    {
        cout<<"customer name is "<<p<<endl;
    }
};
int main()
{
    customer paisa(1001,2025);
}