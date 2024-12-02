/*
       *
      * *
     * * *
      * *
       * 
*/
/*
* * *
*   *
* * *
*/
#include<iostream>
using namespace std;
int main()
{
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i == 0 || i == 2 || j == 0 || j == 2) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout<<endl;
    for(int r=1;r<=3;r++)
    {
        for(int sp=3;sp>r;sp--)
        {
            cout<<" ";            
        }
        for(int c=1;c<=r;c++)    
        {
            cout<<"* ";                   
        }
        cout<<endl;
    }
    for(int r=2;r>=1;r--)
    {
        for(int sp=3;sp>r;sp--)    
        {
            cout<<" ";            
        }
        for(int c=1;c<=r;c++)     
        {
            cout<<"* ";          
        }
        cout<<endl;
    }

    return 0;
}