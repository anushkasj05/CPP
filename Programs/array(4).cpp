#include<iostream>
using namespace std;
/* wap to input 5 values the output should add 1  */
int main()
{
    int a[5];
    cout<<"enter 5 values ";
    for(int d=0;d<5;d++)
    {
    cin>>a[d];
    }
    cout<<"the output"<<endl;
    for(int d=0;d<5;d++)
    {
        cout<<(a[d])+1<<endl;
    }
}