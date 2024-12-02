// wap to find out the larger no of two using friend function class X has int a and class Y has int b
#include<iostream>
using namespace std;
class Y;
class X
{
    int a;
    public:void getdata(int x)
    {
        a=x;
    }
    friend void max(X obj1,Y obj2);
};
class Y
{
    int b;
    public:void getdata(int y)
    {
        b=y;
    }
    friend void max(X obj1,Y obj2);
};
void max(X obj1,Y obj2)
{
    if(obj1.a>obj2.b)
    {
        cout<<"larger no is "<<obj1.a;
    }
    else
    {
        cout<<"larger no is "<<obj2.b;
    }
}
int main()
{
    X obj1;
    Y obj2;
    obj1.getdata(10);
    obj2.getdata(20);
    max(obj1,obj2);
    return 0;
}