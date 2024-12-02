/* wap to print the digit in reverse order using while loop */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n; //1234
    while(n>0)
    {
        int rem=n%10; //4  //3  //2  //1
        cout<<rem;   //4  //3  //2  //1
        n=n/10;
        }
        return 0;
}
/*
while(n>0)
{
    int rem=rem*10+n%10;
    n=n/10;
}
cout<<rem;
*/