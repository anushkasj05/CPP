#include<iostream>
using namespace std;
int main()
{
    int n=1;
    do
    {
        if(n%2!=0)
        {
            cout<<n<<" "<<"odd"<<endl;
        }
        else
        {
            cout<<n<<" "<<"even"<<endl;
        }
        n++;
    } while (n<=10);
    
}