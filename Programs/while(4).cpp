#include<iostream>
using namespace std;
/* wap to find that the number entered is an even or odd number using while loop */
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    while(num%2==0)
    {
        cout<<"The number is even";
        break;
    }
    while(num%2!=0)
    {
        cout<<"The number is odd";
        break;
    }
    return 0;
}