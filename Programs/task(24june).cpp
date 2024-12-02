#include<iostream>
using namespace std;
int main()
{
    int m,r,t,a,b,d;
    char c;
    cout<<" s for finding the simple interest ";
    cout<<" l for finding the largest number ";
    cin>>c;
    switch(c)
    {
        case 's':
        case 'S':
        {
            cout<<"Enter the principal amount ";
            cin>>m;
            cout<<"Enter the rate of interest ";
            cin>>r;
            cout<<"Enter the time ";
            cin>>t;
            b=(m*r*t)/100;
            cout<<"The simple interest is "<<b;
            break;
        }
        case 'l':
        case 'L':
        {
            cout<<"enter two numbers";
            cin>>d>>a;
            if(d>a)
            {
                cout<<"The largest number is "<<d;
            }
            else
            {
                cout<<"The largest number is "<<a;
            }
        }
        default:
        {
            cout<<"invalid number";
        }
    }
}    