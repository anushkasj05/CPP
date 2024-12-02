// wap to generate the power of any number using recursion function
#include<iostream>
using namespace std;
int power(int b,int p)
{
    if(p==0)
    {
        return 1;
    }
    if(b==0)
    {
        return 0;
    }
    return b*power(b,p-1);
}
int main()
{
    int p,b;
    cout<<"enter power " ;
    cin>>p;
    cout<<"enter base " ;
    cin>>b;
    cout<<"power of "<<b<<" is "<<power(p,b);
}