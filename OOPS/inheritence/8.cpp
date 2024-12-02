// heirarichal inheritance
//base class is same for all the child class 
#include<iostream>
using namespace std;
class RBI
{
public:RBI()
{
    cout<<"RBI"<<"\t";
}
};
class SBI:public RBI
{
    public:SBI()
    {
        cout<<"SBI"<<"\t";
    }
};
class AXIS:public RBI
{
    public:AXIS()
    {
        cout<<"AXIS"<<"\t";
    }
};
int main()
{
    SBI s;
    AXIS a;
}