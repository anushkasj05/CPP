#include<iostream>
using namespace std;
int main()
{
    int d[]={5,12,28,17,21,19,9};
    int n=sizeof(d)/sizeof(d[0]); //formula to find the length of the array
    cout<<n<<"\n";
    for(int a=0;a<n;a++)
    {
        cout<<d[a]<<"\n";
    }
}