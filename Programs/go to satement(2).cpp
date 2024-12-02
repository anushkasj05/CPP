#include<iostream>
using namespace std;
int main()
{
    int pass,a=1;

    cout<<"Enter your password: ";
    cin>>pass;
    password:
    if(pass==1234 )
    {
        cout<<"Welcome to your account!";
    }
    else if (a<3)
    {   
        cout<<"Incorrect password"<<endl<<3-a<<" attempts left"<<" Please try again.\n";
        cin>>pass;
        a++;
        goto password;
    }
    else
    {
        cout<<"You have exceeded the maximum number of attempts. Please try again later.";      
        return 0;   
    }
}
