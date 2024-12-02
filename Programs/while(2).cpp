/*  #include<iostream>
using namespace std;
 wap to find out that the given number is a prime number or not using while loop  
int main()
{
    int n,i=2;
    cout<<"Enter a number : ";
    cin>>n;
    while(i<n)
    {
        if(n%i==0) 
        {
            cout<<"Not a prime number";
            break;
        }
            else
        {
            cout<<"Prime number";
            break;
        }
        i++;
    }
}*/
/*#include<iostream>
using namespace std;

int main()
{
    int n,i=2;
    cout<<"Enter a number : ";
    cin>>n;

    if(n <= 1)
    {
        cout<<"Not a prime number";
        return 0;
    }
    while(i * i <= n)
    {
        if(n % i == 0) 
        {
            cout<<"Not a prime number";\
            return 0;
        }
        i++;
    }

    cout<<"Prime number";
    return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
    int n,m,c;
    c=0;
    cout<<"enter a number : ";
    cin>>n;
    m=n-1;
    while(m>0)
    {
        if(n%m==0)
        {
            c++;
            //break;
        }
        m--;
        }
        if(c==2)//c==0
        {
            cout<<"prime number";
        }
        else
        {
            cout<<"not a prime number";
        }
}
