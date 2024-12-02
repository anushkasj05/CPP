#include<iostream>
using namespace std;
int main()
{
    float p,c,m,ttl,per;
    cout<<"enter the marks of the three subjects (physics , chemistry , maths )"<<endl;
    cin>>p>>c>>m;
    ttl=p+c+m;
    per=ttl/3;
    if(p<0 || c<0 || m<0)
    {
        cout<<"invalid marks"<<endl;
    }
    else if (per>=35 && per<50)
    {
        cout<<per<<"%"<<endl;
        cout<<"Third division";
    }
    else if (per>=50 && per<60)
    {
        cout<<per<<"%"<<endl;
        cout<<"Second division";
    }
    else if (per>=60 && per<=100)
    {
        cout<<per<<"%"<<endl;
        cout<<"First division";
    }
    else 
    {
        cout<<per<<"%"<<endl;
        cout<<"fail";
    }
    
    /*if (p<0)
    {
        cout<<"negative marks entered in physics"<<endl;
    }
    else
    {
        cout<<"valid marks entered ";
    }
    if (c<0)
    {
        cout<<"negative marks entered in chemistry "<<endl;
    }
    else
    {
        cout<<"valid marks entered";
    }
    if (m<0)
    {
        cout<<"negative marks entered in maths"<<endl;
    }
    else
    {
        cout<<"valid marks entered ";
    }*/
    


   
}