/* wap for factorial using recursion */
#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    int k=n*factorial(n-1);
    return k;
}
int main()
{
    cout<<factorial(5);
}