#include<iostream>
using namespace std;
/* wap to take the base and poweer from the user and find the answer using do while loop*/
int main()
{
    int base,power,ans=1;
    cout<<"enter the base "<<endl;
    cin>>base;
    cout<<"enter the power "<<endl;
    cin>>power;
    do
    {
        ans=ans*base;
        power--;
        }while(power!=0);
        cout<<"the answer is "<<ans<<endl;
        return 0;
}
