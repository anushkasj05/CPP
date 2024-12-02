#include<iostream>
using namespace std;
int main()
{
    int a=1;
    for (int r=1; r<=3; r++)
    {
        for(int c=1;c<=r;c++)
        {
            cout<<a<<"\t";
            a++;
        }
        cout<<endl;
    }
    
}