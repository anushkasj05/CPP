#include<iostream>
using namespace std;
//single condition :it will execute the statement when the condition or statement is true inside if(condition)otherwise it wont go inside if (condition).
int main()
{
    int a;
    cout<<"enter your age: "<<endl;
    cin>>a;
    if(a>0 && a<100)
    {
        cout<<"the entered valid age is "<<a<<endl;
    }
}