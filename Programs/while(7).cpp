#include<iostream>
using namespace std;
/* wap to get the factors of the number using while loop */
int main()
{
    int num,fact=1;
    cout<<"Enter the number: ";
    cin>>num;
    while(fact<=num)
    {
        if(num%fact==0)
        {
            cout<<fact<<" ";
        }
        fact++;
    }
    return 0;
}