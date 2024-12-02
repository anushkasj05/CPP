#include<iostream>
using namespace std;
/*wap to get the sum of all the jnumbers from 1 to 10 using while loop */
int main()
{
   int i=1,sum=0;
   while(i<=10)
   {
    sum=sum+i;
    i++;
    }
    cout<<"the sum of all the numbers from 1 to 10 is "<<sum;
    return 0;
}
