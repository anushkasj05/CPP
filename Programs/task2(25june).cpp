#include<iostream>
using namespace std;
int main()
{
    int a ,d;
    cout<<"Enter any number : ";
    cin>>a; 
    cout<<"enter 1 for square "<<endl;
    cout<<"enter 2 for cube "<<endl;
    cout<<"enter 3 for odd/even"<<endl;
    cin>>d;
    switch(d)
    {
        case 1:
        {
            cout<<"Square of the number is : "<<a*a<<endl;
            break;
        }
        case 2:
        {
            cout<<"Cube of the number is : "<<a*a*a<<endl;
        break;
        }
        case 3:
        {
            if(a%2==0)
            {
                cout<<"The number is even."<<endl;
            }
            else
            {
                cout<<"The number is odd."<<endl;
            }
            break;
         }
        default:
        {
            cout<<"Invalid choice."<<endl;
        }
    }
}