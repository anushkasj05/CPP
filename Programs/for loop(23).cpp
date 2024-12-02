#include<iostream>
using namespace std;
/*
  *
 * *
* * *
*/
int main()
{
    for(int r=1;r<=3;r++)
    {
        for(int sp=3;sp>r;sp--)    //1 //2 //3
        {
            cout<<" ";             //__ //_ //
        }
        for(int c=1;c<=r;c++)     //1  //2 //3
        {
            cout<<"* ";           //* //** //***        
        }
        cout<<endl;
    }
    return 0;
}