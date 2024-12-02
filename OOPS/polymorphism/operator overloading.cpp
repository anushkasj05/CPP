// operator overloading
#include<iostream>
using namespace std;
class Complex{
    private:int anushka ,divyansh;
    public:Complex(int a=0,int d=0){
        anushka=a;
        divyansh=d;
    }
    Complex operator+(Complex const& obj){
        Complex temp;
        temp.anushka=anushka+obj.anushka;
        temp.divyansh=divyansh+obj.divyansh;
        return temp;
    }
    void display(){
        cout << anushka << " + i" << divyansh << '\n'; 
}
};
int main(){
    Complex c1(3,4);
    Complex c2(2,5);
    Complex c3;
    c3=c1+c2;
    c3.display();
}