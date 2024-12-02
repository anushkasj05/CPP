#include<iostream>
using namespace std;
int main()
{
    int n=1,m=0/*n=0,m*/;
    do
    { 
       // n++;
       // m=n*(n+1)/2;
        m=m+n;
        n++;
    } while (n<=10);
    cout<<"the total sum is "<<m<<endl;
    
}