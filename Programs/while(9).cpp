#include<iostream>
using namespace std;
/* wap to display the sum of digits of a number any range  */
int main()
{
    int n,sum=0;
    cout<<"enter the number";
    cin>>n;
    while(n>0)
    {
        sum=sum+n%10; //  3=0+123%10   //  5=3+12%10  //  6=5+1%10  
        n=n/10;                       //  12=123/10  //    1=12/10     
    }
        cout<<"sum of digits of a number is "<<sum;
        return 0;
}
