#include<iostream>
using namespace std;
int main()
{
    char adhr,voter,pan;
    cout<<"Do you have adhaar card?(y/n)";
    cin>>adhr;
    if(adhr=='y'||adhr=='Y')
    {
        cout<<"Do you have voter card? (y/n)";
        cin>>voter;
        if(voter=='y'||voter=='Y')
        {
            cout<<"Do you hve your pan card? (y/n)";
            cin>>pan;
            if(pan=='y' || pan=='Y')
            {
                cout<<"Get your passport";
            }
            else
            {
               cout<<" missing pan card";
            }
        }
        else
        {
            cout<<"Second phase not cleared";
        }
    }
    else 
    {
        cout<<"OUT";
    }
}