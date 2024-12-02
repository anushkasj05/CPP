/*
multiple inheritance 
diamond problem may occur in multiple inheritance if the name of the functio is same in more than one class
where one child class inherites multiple child class and each base class having the same name 
Solution of the diamond problem
slicing is used to resolve the diamond problem
syntax:-
child_class_object.parent_class::function_name(); 
*/
#include<iostream>
using namespace std;
class AXIS
{
    public:AXIS()
    {
        cout<<"\n AXIS \n";
    }
    ~AXIS()
    {
        cout<<"\n Destructor of AXIS \n";
    }
};
class SBI
{
    public:SBI()
    {
        cout<<"\n SBI\n";
    }
    ~SBI()
    {
        cout<<"\n Destructor of SBI \n";
    }
};
class CUST:public SBI,public AXIS
{
    public:CUST()
    {
        cout<<"\n CUST \n ";
    }
    ~CUST()
    {
        cout<<"\n Destructor of CUST \n";
    }
};
int main()
{
    CUST c;
}