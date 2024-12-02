// /*wap to display the unique values in an array*/ 
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3, 2, 4, 5, 6, 2, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int count[10] = {0};
//     for(int i = 0; i < n; i++)
//         count[arr[i]]++;

//     cout << "Unique values in the array are: " << endl;
//     for(int i = 0; i < 10; i++)
//     {
//         if(count[i] == 1)
//             cout << i << endl;
//     }

//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,4,3,2,4,6,9,10,3,5,3,2,3,5,4,5,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                break;
            }
        }
    if(i==j)
    {
        cout<<a[i]<<" ";
    }
    }
}