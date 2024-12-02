// wap to generate the nth term fibonacci series using recursion function
#include<iostream>
using namespace std;
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
    
}
int main()
{
    int n;
    cout<<"enter the nth term ";
    cin>>n;
    cout<<"the nth term of fibonacci series is "<<fibonacci(n);
}