#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Enter an operator (+,-,*,/): ";
    cin>>c;
    switch(c)
    {
        case '+':
        {
            cout<<"Result: "<<a+b;
            break;
        }
        case '-':
        {
            cout<<"Result: "<<a-b;
            break;
        }    
        case '*':
        {
            cout<<"Result: "<<a*b;
            break;
        }    
        case '/':
        {
            if(b!=0)
            cout<<"Result: "<<a/b;
            else
            cout<<"Error! Division by zero is not allowed.";
        }
        }
        return 0;
}