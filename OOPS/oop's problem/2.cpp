/*
wap to take two parameters and store the value in a variable and display the data 
*/ 
#include<iostream>
using namespace std;
class TCS
{
    char name[100];
    int sal;
    public: TCS(char n[100],int s)
    {
        strcpy(name,n);
        sal=s;
    }
    void display()
    {
        cout<<"Your name is "<<name<<" and your salary is "<<sal<<endl;
    }
};
int main()
{
    TCS obj("Anushka",50000);
    obj.display();
    return 0;
}