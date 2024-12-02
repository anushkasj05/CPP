#include<iostream>
using namespace std;
int main()
{
    char c,b;
    cout<<"enter any character ";
    cin>>c;
    cout<<"V for vowel/consonent G for gender ";
    cin>>b;
    switch(b)
    {
        case 'V':
        case 'v':
        {
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
            {
                cout<<"it is vowel";
            }
            else
            {
                cout<<"it is consonent";
            }
        break;
        }
        case 'G':
        case 'g':
        {
            if(c=='m' || c=='M')
            {
                cout<<"MALE";
            }
            else if (c=='f' || c=='F')
            {
                cout<<"FEMALE";
            }
            else
            {
                cout<<"OTHERS";
            }
            break;
        }
        default:
        {
            cout<<"invalid choice";
        }
    }
}