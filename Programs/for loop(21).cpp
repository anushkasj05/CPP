#include<iostream>
using namespace std;
int main()
{
    for(int r=1;r<=3;r++)
    {
        for(int sp=3;sp>r;sp--)    
        {
            cout<<" ";             
        }
        for(int c=1;c<=r;c++)     
        {
            cout<<char(c+96);                 
        }
        cout<<endl;
    }
    return 0;
}