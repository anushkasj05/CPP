#include<iostream>
using namespace std;
int main()
{
    int a[2][2]={2,3,4,5};
    int b[2][2]={6,1,2,9};
    for(int r=0;r<=1;r++)
    {
        for(int c=0;c<=1;c++)
        {
          if(a[r][c]%2==0)
          {
            cout<<a[r][c]+b[r][c]<<"\t ";
          }
          else
          {
            cout<<a[r][c]-b[r][c]<<"\t ";
          }
        }
        cout<<"\n";
    }
}