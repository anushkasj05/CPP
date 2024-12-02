#include<iostream>
using namespace std;
// wap to find out the week days name by entering any number between 1 to 7
int main()
{
    int a;

    cout<<"enter a number"<<endl;
    cin>>a;

   if (a==1)
   {
    cout<<"MONDAY";
   }
   else if (a==2)
   {
    cout<<"TUESDAY";
   }
   else if (a==3)
   {
    cout<<"WEDNUSDAY";
   } 
   else if (a==4)
   {
    cout<<"THURSDAY";
   } 
   else if (a==5)
   {
    cout<<"FRIDAY";
   } 
   else if (a==6)
   {
    cout<<"SATURDAY";
   } 
   else if (a==7)
   {
    cout<<"SUNDAY";
   } 
   else if (a<=0 || a>7)
   {
    cout<<"invalid number";
   }
}