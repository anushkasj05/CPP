/*
Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. 
Include member functions to deposit and withdraw money from the account.
*/
#include <iostream>
using namespace std;
class BankAccount {
    private:int accno,balance;
    public:BankAccount(int a,int b){
        accno=a;
        balance=b;
    }
    int deposit(int amount){
        balance+=amount;
        cout<<"Balance: "<<balance<<endl;
    }
    int  withdraw(int amount){
        if(amount>balance){
            cout<<"Insufficient balance"<<endl;
        }
        else{
            balance-=amount;
             cout<<"Balance: "<<balance<<endl;        
            }
    }
};
int main(){
    BankAccount ba(125,1000);
    ba.deposit(12000);
    ba.withdraw(5000);
}