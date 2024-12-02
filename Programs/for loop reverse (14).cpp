#include<iostream>
using namespace std;
/* wap to print the following loop using for loop 
123
12
1
*/
int main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i;
        }
            cout<<endl;
    }
}