/*
Copy constructor
they are of two types shallow copy and deep copy 
*/
// #include<iostream>
// using namespace std;
// class atm 
// {
//     int amount;
//     public:atm(int r)
//     {
//         amount=r;
//     }
//     void show()
//     {
//         cout<<"Balance="<<amount<<endl;
//     }
// };
// int main()
// {
//     atm k(10000);
//     k.show();
//     atm p=k; // implicit assignment copy constructor
//     p.show();
//     atm t(k); // Shallow copy constructor // its already made // no extra memory is used 
//     t.show();
// }
/*
deep copty constructor occupies extra space we have to create deep copy constructor as class name 
using like a datatype along with reference .
*/
#include<iostream>
using namespace std;
class atm
{
    int amount,*loc;
    public:atm (atm &t)
    {
        amount=t.amount;
        loc=new int;
        *loc=*(t.loc);
    }
    atm(int amt,int adrs)
    {
        amount=amt;
        loc=new int;
        loc=&adrs;
    }
    void transaction(int a)
    {
        amount=amount+a;
        *loc=*loc+1;
    }
    void show()
    {
        cout<<"balance="<<amount<<"\t";
        cout<<"location="<<*loc<<endl;
    }
};
int main()
{
    atm mpnagar(1000,101);
    atm bhel(mpnagar);
    mpnagar.show();
    bhel.show();
    mpnagar.transaction(10000);
    mpnagar.show();
    bhel.show();
}