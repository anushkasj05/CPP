#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Enter an a for addtion and m for multiplication ";
    cin>>c;
    switch(c)
    {
        case 'a':
        case 'A':
        {
            cout<<"Addition of two numbers is: "<<a+b;
            break;
        }
        case 'm':
        case 'M':
        {
            cout<<"Multiplication of two numbers is: "<<a*b;
            break;
        }

        default:
        {
            cout<<"Invalid choice";
        }
    }
    
}