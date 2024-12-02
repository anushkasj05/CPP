// multilevel inheritance
/*
in a multilevel inheritance we create more than two classes and each subclass inherites the properties of previous class 
*/
#include<iostream>
using namespace std;
class RBI
{
public: RBI()
{
    cout<<"\n RBI\n";
}
~RBI()
{
    cout<<"\n RBI destructor\n";
}
};
class SBI:public RBI
{
    public:SBI()
    {
        cout<<"\n SBI \n";
    }
    ~SBI()
    {
        cout<<"\n SBI destructor\n";
    }
};
class CUST:public SBI
{
    public:CUST()
    {
        cout<<"\n CUSTOMER\n";
    }
    ~CUST()
    {
        cout<<"\n CUSTOMER destructor\n";
    }
};
int main()
{
    CUST c;
    // c.cmsg();
    // c.smsg();
    // c.rmsg();
}