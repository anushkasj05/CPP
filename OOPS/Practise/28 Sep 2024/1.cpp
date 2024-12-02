#include<iostream>
using namespace std;
class A{
    protected:int a;
};
class B:virtual public A{
    protected:int b;
};
class C:virtual public A{
    protected:int c;
};
class D:public B,public C{
    public:D(){
        a=10;
        b=20;
        c=30;
        cout<<a+b+c;
    }
};
int main(){
    D d;
    return 0;
}