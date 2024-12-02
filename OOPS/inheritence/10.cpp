// HYBRID INHERITRANCE
// multipath inheritance which causes diamond problem which can we solve or resolved by the virual class but the memory of 8 byte is wasted
// virtual pointer table  
// hotline /vip line 
#include<iostream>
using namespace std;
class teacher
{
    public:teacher()
    {
        cout<<"teacher constructor\n";
    }
};
class student1:virtual teacher
{
    public:student1()
    {
        cout<<"student1 constructor\n";
    }
};
class student2:virtual teacher
{
    public:student2()
    {
        cout<<"student2 constructor\n";
    }
};
class project:public student1,public student2
{
    public:project()
    {
        cout<<"project constructor\n";
    }
};
int main()
{
    project p;
}