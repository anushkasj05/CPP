// function overloading 
#include<iostream>
using namespace std;
class A{
    public:int  display(int x){
        cout<<x<<endl;
    }
    void display(double x){
        cout<<x<<endl;
    }
    int display(char a){
        cout<<a<<endl;
    }
};
int main(){
    A obj;
    obj.display(10);
    obj.display(10.5);
    obj.display('a');
}