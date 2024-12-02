#include<iostream>
using namespace std;
/* using for loop print the following pattern 
A
BB
CCC
DDDD
*/
int main()
/*{
    int i,j;
    char ch='A';
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<ch;
        }
        cout<<endl;
        ch++;
    }
    return 0;
}*/
{
    int i,j;
    char ch='C';
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<ch;
        }
        cout<<endl;
        ch--;
    }
    return 0;
}