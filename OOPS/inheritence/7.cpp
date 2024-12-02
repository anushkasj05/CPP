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
    public:void msg()
    {
        cout<<"\n AXIS \n";
    }
};
class SBI
{
    public:void msg()
    {
        cout<<"\n SBI\n";
    }
};
class CUST:public SBI,public AXIS
{
    public:CUST()
    {
        cout<<"\n CUST \n ";
    }
};
int main()
{
    CUST c;
//     // c.SBI::msg();
//     // c.AXIS::msg();
//     SBI s=c;
//     s.msg();
//     AXIS g=c;
//     g.msg();
static_cast<SBI>(c).msg();//smart pointer
}