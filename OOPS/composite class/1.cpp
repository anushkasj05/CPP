/* 
Composite Class is called a has a relationship class.
It holds the object of the previous classes and with the help of it can invoke or call the member functions of earlier class inside a function .  
HAS A RELATIONSHIP 
*/
#include<iostream>
using namespace std;
class client
{
    public:void virus()
    {
        cout<<"Hurray !!! Ur System got hacked ";
    }
};
class Reward
{
    client c;
    public:void dollar()
    {
        cout<<"U got $10000000000000\n ";
        c.virus();
    }
};
int main()
{
    Reward r;
    r.dollar();
}