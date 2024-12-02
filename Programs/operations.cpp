#include<iostream>
using namespace std ;
class student
{
    int a,b;
    public:void get_display_data()
    {
        cout<<"Enter the number 1 : "<<endl;
        cin>>a;
        cout<<"Enter the number 2 : "<<endl;
        cin>>b;
        cout<<"The entered numbers are : "<<a<<" and "<<b<<endl;
    }
    int add()
    {
        cout<<"Addition : "<<a+b<<endl;
        return(0);
    }
    int sub()
    {
        cout<<"Substraction : "<<a-b<<endl;;
        return(0);
    }
    int mul()
    {
        cout<<"multiplication : "<<a*b<<endl;
        return(0);
    }
    int div()
    {
        cout<<"division : "<<a/b<<endl;
        return(0);
    }
    int mode()
    {
        cout<<"mode : "<<a%b<<endl;
        return(0);
    }
};
int main()
{
    student stu;
    stu.get_display_data();
    stu.add();
    stu.sub();
    stu.mul();
    stu.div();
    stu.mode();
}