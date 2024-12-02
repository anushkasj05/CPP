#include<iostream>
using namespace std;
/* wap to change the capital character into lower character */
int main()
{
    char ch;
    cout<<"enter a character ";
    cin>>ch;
    if(ch>='A' && ch<='Z')
    {
        ch=ch+32;
        cout<<"lower case character is "<<ch;
    }
    else
    {
        ch=ch-32;
        cout<<"capital character is "<<ch;
    }
    return 0;
}
