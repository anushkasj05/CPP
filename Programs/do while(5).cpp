#include<iostream>
using namespace std;
/*wap to print the factorial of any number*/
int main()
{
    long double n;
    cout<<"Enter the number whose factorial you want to find"<<endl;
    cin>>n;
    int fact=1;
    do
    {
        fact=fact*n;
        n--;
        //cout<<fact<<"*"<<n<<"="<<fact;
    }
    while(n>0);
    cout<<"The factorial of the number is "<<fact<<endl;
}