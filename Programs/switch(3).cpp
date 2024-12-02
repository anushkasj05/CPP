#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    cout<<"1 for swap"<<endl;
    cout<<"2 for finding the max number"<<endl;
    cout<<"3 for finding the min number"<<endl;
    cout<<"Enter your choice: ";
    cin>>c;
    switch(c)
    {
        case 1:
        {
            d=a;
            a=b;
            b=d;
            cout<<"After swapping: a="<<a<<" b="<<b<<endl;
            break;
        }    
        case 2:
        {
            if(a>b)
            {
                cout<<"Max number is: "<<a<<endl;
            }
            else
            {
                cout<<"Max number is: "<<b<<endl;
            }
            break;
        case 3:
        {
            if(a<b)
            {
                cout<<"Min number is: "<<a<<endl;
            }
            else
            {
                cout<<"Min number is: "<<b<<endl;
            }
            break;
        }    
        default:
        {
            cout<<"Invalid choice"<<endl;
        }
        return 0;
        }
    }
}    
           
