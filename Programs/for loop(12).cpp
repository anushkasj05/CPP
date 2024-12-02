#include<iostream>
using namespace std;
/* wap to print the following patter using for loop
   *
  * *
 * * *
 */
int main()
{
   int r,c;
   for(r=1;r<=4;r++)
   {
      for(c=1;c<=r;c++)
      {
         cout<<"* ";
      }
      cout<<endl;
      }
      return 0;
}