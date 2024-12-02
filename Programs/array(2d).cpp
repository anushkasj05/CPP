// in a 2d array we use two subscript[] the first[] belongs to rows and the second[] belongs to columns we always use two nested loops for a 2d array  where the first loop is used for rows and the second loop is used for columns  
// wap for 2d array
#include<iostream>
using namespace std;
int main()
{
    // [row][column]
    int a[2][3];
    cout<<"enter the  array values"<<endl;
    for(int r=0;r<=1;r++)
    {
        for(int c=0;c<=2;c++)
        {
            cin>>a[r][c];
        }
    }
    cout<<"output is \n";
    for(int r=0;r<2;r++)
    {
        for(int c=0;c<3;c++)
        {
            cout<<a[r][c]<<"\t";
            
        }
        cout<<"\n";
    }
}