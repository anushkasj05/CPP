#include<iostream>
using namespace std;
/* wap to print following patter using for loop
*
**
***
****
*****
*/
int main()
{
    int a,d;
    for(a=1;a<=5;a++)
    {
        for(d=1;d<=a;d++)
        {
            cout<<"*";
            }
            cout<<endl;
    }
}