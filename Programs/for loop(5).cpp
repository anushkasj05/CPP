#include<iostream>
using namespace std;
/* wap to find count the number of digits to make the given using for loop */
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i*=10)
    {
        count++;
    }
    cout<<"the number of digits in "<<n<< " are "<<count;
    return 0;
}