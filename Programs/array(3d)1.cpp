#include<iostream>
using namespace std;
int main()
{      //table//row//column
    int a[2][2][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    for(int t=0;t<2;t++)
    {
        for(int r=0;r<2;r++)
        {
            for(int c=0;c<3;c++)
            {
                cout<<a[t][r][c]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}