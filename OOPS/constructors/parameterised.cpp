// parameterized constructor
#include<iostream>
using namespace std;
class A{
    public:A(int a,int d){
        cout<<a+d;
    }
};
int main(){
    A a(12,5);
    return 0;
}