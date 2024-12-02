#include<iostream>
using namespace std;
/* wap to generate a table of the entered number using for loop */
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}