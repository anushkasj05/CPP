#include<iostream>
using namespace std;
int main()
{
    float p,r,t,simpi ;
    cout<<"the principle value :"<<endl;
    cin>>p;
    cout<<"the rate of interest"<<endl;
    cin>>r;
    cout<<"the time period"<<endl;
    cin>>t;

    simpi=(p*r*t)/100;
    cout<<"the simple interest is "<<simpi;
}