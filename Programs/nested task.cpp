#include<iostream>
using namespace std;
int main()
{
    int age;
    float perc;
    cout<<"enter your age ";
    cin>>age;
    if(age>=18 && age<=30)
    {
        cout<<"enter your percentage ";
        cin>>perc;
        if(perc>=60 && perc<=100)
        {
            cout<<"qualified";
        }
        else
        {
            cout<<"not qualified";
        }
    }
    else
    {
        cout<<"not elligible";
    }return 0;
}

