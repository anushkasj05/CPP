#include<iostream>
using namespace std;
//In bi condition it will execute the statement when the if condition is true otherwise it will execute the else part 
int main()
{
    int a;
    cout<<"enter your age: "<<endl;
    cin>>a;
    if(a>0 && a<100)
    {
        cout<<"the entered valid age is "<<a<<endl;
    }
    else
    {
        cout<<"the entered age is not valid"<<endl;
    }
}