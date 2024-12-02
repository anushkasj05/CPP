//wap to add the values of two arrays according to respective columns 
#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={10,20,30,40,50,60,70,80,90};
    cout<<"array a"<<endl;
     for(int r=0;r<=2;r++)
    {
        for(int c=0;c<=2;c++)
        {
            cout<<a[r][c]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"array b"<<endl;
     for(int r=0;r<=2;r++)
    {
        for(int c=0;c<=2;c++)
        {
            cout<<b[r][c]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"addition of a and b"<<endl;
     for(int r=0;r<=2;r++)
    {
        for(int c=0;c<=2;c++)
        {
            cout<<a[r][c]+b[r][c]<<"\t";
        }
        cout<<"\n";
    }
}