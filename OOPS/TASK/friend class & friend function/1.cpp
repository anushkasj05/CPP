// friend function is used to access the private and protected data members outside of the class.
// it should be declared in both classes but defined outside of the class.
// defined outside of the class
#include<iostream>
using namespace std;
class tenthfrd2;
class tenthfrd1
{
    int per=90;
    friend void result (tenthfrd1 , tenthfrd2); 
};
class tenthfrd2
{
    int per=89;
    friend void result (tenthfrd1,tenthfrd2);
};
void result(tenthfrd1 obj1 ,tenthfrd2 obj2)
{
    if (obj1.per>obj2.per)
    {
        cout<<obj1.per<<" is the highest ";
    }
    else{
        cout<<obj2.per<<" is the highest ";
    }
}
int main()
{
    tenthfrd1 t1;
    tenthfrd2 t2;
    result(t1,t2);
    return 0;
}