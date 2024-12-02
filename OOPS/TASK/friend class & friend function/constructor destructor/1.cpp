/* 
implisite coalling function.
special function 
constructor is used to allocate/create  the memory of an object of its class at run time .
by default public spacifier.
note:- constructor doesn't have any return type.
it has to be public always as a modifier can be made private to restrict 
There are three types of constructors
->Default constructor
->Parameterized constructor
->Copy constructor
copy constructors are of two types deep copy and shallow copy 

Default constructor

C++ program contain a default constructor by default and the default constructor is always non- parameterized 
Syntax:-
class class_name{
    public:classname()
    {
        statement/code;
    }
};
*/
#include<iostream>
using namespace std;
class joy
{
    public:joy() // default constructor
    {
        cout<<"constructor is called"<<endl;
    }
    ~joy()
    {
        cout<<"destructor is called"<<endl;
    }
};
int main()
{
    joy p;
    cout<<sizeof(p)<<endl;
}