// write a function SmallLargeSum(array) which accepts the array as an arguement of parameter, that performs the addition of the second largest element from the even location with the second largest element from the odd location
// all the array elements are unique
// if the length of the array is 3 or less than 3, then return 0
// if Array is empty then return zero.
// take the input from the user
/* Array of decay*/
#include<iostream>
using namespace std;
int SmallLargeSum(int arr[],int d)
{
    if(d<=3)
    {
        return 0;
    }
    int mx1,mx2,x;
    mx1=mx2=INT_MIN;
    for(int i=0;i<d;i+=2)
    {
        x=arr[i];
        if(mx1<x)
        {
            mx2=mx1;
            mx1=x;
        }
        if(mx2<x && mx1>x)
        {
            mx2=x;
        }
         return mx2;
    }
    return d;
}
int main()
{
    int d;
    cin>>d;
    int arr[d];
    for(int i=0;i<d;i++)
    {
        cin>>arr[i];
    }
    cout<<SmallLargeSum(arr,d);
}