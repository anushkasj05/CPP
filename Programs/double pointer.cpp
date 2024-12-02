// in a 1d array single pointer is used
// in a 2d array we use double pointer/two pointer.
// 2d array is also called link list.
// dynamic array program
#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of rows in an array ";
    cin>>r;
    cout<<"Enter the number of columns in an array ";
    cin>>c;
    int **arr=new int*[r]; //memory leakage is when the memory is full i.e we forget to delete/free the occupied memory
    for(int i=0;i<r;i++)
    {
        arr[i]=new int[c];
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<"Enter the element at "<<i<<" "<<j<<" position ";
                cin>>arr[i][j];
            }
        }
        cout<<"2d array"<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        delete []arr;
        cout<<"memory is freed";
}