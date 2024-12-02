#include<iostream>
using namespace std;
class Top2;
class Top1{
    public: int a=12;
    friend class Top2;
};
class Top2{
    public: int d=5;
};
int main()
{
    Top1 t1;
    Top2 t2;
    t1.a=t1.a+t2.d; //17=12+5
    t2.d=t1.a-t2.d; // 12=17-5
    t1.a=t1.a-t2.d; //5=17-12
    cout<<"a="<<t1.a<<endl<<"d="<<t2.d;
}