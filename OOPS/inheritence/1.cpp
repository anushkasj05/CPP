/*
ther are 5 types of inheritence
-> single 
   A->B
-> multilevel
   A->B->C
-> multiple
   A->C<-B
-> heirarichal
A->B->C->D
-> Hybrid INHERITENCE

inheritence 

it is used to access the property of the parent class  and with the help of it we use less code 
there are 5 types of inheritece
-> single inheritance 
->multilevel inheritance
-> multiple inheritance
-> heirarichal inheritance
-> hybrid inheritance

single inheritance 

ina single inheritance we use only two class where the first class is called the parent class or the root class and the second class is called a child class 
we always create an object of child class and with the help of it we can access the data member and mnember function of both the class 
SYNTAX:- class child : public parent/root
*/
#include<iostream>
using namespace std;
class RBI 
{
   int a=90;
   public:RBI()
   {
      cout<<"rbi"<<endl;;
   }
   public:void show()
   {
      cout<<"RBI="<<a<<endl;
   }
   protected:void error()
   {   
      cout<<"\n arroved by RBI \n";
   }
};
class SBI : public RBI
{
   int d=80;
   public:SBI()
   {
      cout<<"sbi"<<endl;
   }
   public:void fshow()
   {
      cout<<"SBI="<<d<<endl;
      error();
   }
};
int main()
{
   SBI obj;
   cout<<sizeof(obj)<<"\n";
   obj.show();
   obj.fshow();
   return 0;
}