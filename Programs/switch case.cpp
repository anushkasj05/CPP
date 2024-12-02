#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    cout<<"select from 1 for addition";
    cout<<"select from 2 for subtraction";
    cout<<"select from 3 for multiplication";
    cout<<"select from 4 for division";
    cin>>c;
    switch(c)
    {
        case 1:
        {
            cout<<"Addition of a and b is: "<<a+b;
            break;
        }    
        case 2:
        {
            cout<<"Subtraction of a and b is: "<<a-b;
            break;
        }
        case 3:
        {
            cout<<"Multiplication of a and b is: "<<a*b;
            break;
        }
        case 4:
        {
            cout<<"Division of a and b is: "<<a/b;
            break;
        }    
        default:
        {
            cout<<"Invalid choice";
        }
        return 0;
}
}