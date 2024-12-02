// wap to get the sum of the array
#include<iostream>
using namespace std;
int main()
{
    // [row][column]
    int a[3][3];
    int sum=0;
    cout<<"enter the  array values"<<endl;
    for(int r=0;r<=2;r++)
    {
        for(int c=0;c<=2;c++)
        {
            cin>>a[r][c];
        }
    }
    cout<<"output is \n";
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            sum=sum+a[r][c];
        }
    }
    cout<<sum<<endl;
        cout<<"\n";
}