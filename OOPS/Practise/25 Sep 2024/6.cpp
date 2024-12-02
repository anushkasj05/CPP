/*
Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. 
Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.
*/
#include<iostream>
using namespace std;
class Triangle {
    private:int length1,length2,length3;
    public:
    void display(int l1,int l2,int l3){
        length1=l1;
        length2=l2;
        length3=l3;
        if(length1==length2 &&length2==length3)
        {
            cout<<"Equilateral Triangle"<<endl;
        }
        else if(length1==length2 || length2==length3 || length1==length3){
            cout<<"Isosceles Triangle"<<endl;
        }
        else{
            cout<<"Scalene Triangle"<<endl;
        }
    }
};
int main(){
    Triangle T;
    T.display(12,5,12);
    T.display(5,12,17);
    T.display(10,10,10);
    return 0;
}