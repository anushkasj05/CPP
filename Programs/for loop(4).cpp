#include<iostream>
using namespace std;
/* wap to find out whether the given number is perfect or not uisng for loop  */
int main()
{
    int n,i,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        cout<<"The number is perfect";
    }
    else
    {
        cout<<"The number is not perfect";
    }
        return 0;
}