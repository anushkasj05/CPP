#include<iostream>
using namespace std;
/* wap to find the factorial of the number entered using while loop */
int main()
{
    long double n,fact=1;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    cout<<"Factorial of the number is: "<<fact;
    return 0;
}