/* wap to count the duplicate values in an array */
#include <iostream>
using namespace std;
// int main()
// {
//     int arr[] = {1, 2, 3, 2, 4, 5, 6, 2, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int count[10] = {0};
//     for(int i = 0; i < n; i++)
//     {
//         count[arr[i]]++;
//     }
//     cout << "Duplicate values in the array are: " << endl;
//     for(int i = 0; i < 10; i++)
//     {
//         if(count[i] > 1)
//             cout << i << " is repeated " << count[i] << " times" << endl;
//     }

//     return 0;
// }

int main()
{
    int a[]={4,3,2,4,5,6,3};
    int n=sizeof(a)/sizeof(a[0]);
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                cout<<a[i]<<"\t";
            }
        }
    }
    cout<<"total duplicate value count="<<c;
}