#include<iostream>
using namespace std;
/* wap to get the sum of the fisrt and the last digit using while loop */
int main()
{
    int a,d;
    cout<<"Enter the number : ";
    cin>>a;
    d=a%10; //3=123%10;   //2=512%10
    while(a>9)
    {
                 //a=12       // a=51
        a=a/10; //1=12/10;   // 5=51/10
    }
    cout<<"The sum of the first and last digit is : "<<a+d;
    return 0;
}