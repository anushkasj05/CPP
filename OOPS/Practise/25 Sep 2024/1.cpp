/*
Write a C++ program to implement a class called Circle that has private member variables for radius. 
Include member functions to calculate the circle's area and circumference.
*/
#include<iostream>
using namespace std;
class Circle{
    private:int radius;
    // public:Circle(int r){
    //     radius=r;
    // }
    int area(int r){
        radius=r;
        return 3.14*radius*radius;
    }
    int circumference(int r){
        radius=r;
        return 2*3.14*radius;
    }
    // int display(){
    //     cout<<"Area of circle is "<<area()<<endl;
    //     cout<<"Circumference of circle is "<<circumference()<<endl;
    // }
};
int main()
{
    Circle c;
    // cout<<"Area of circle is "<<c.area()<<endl;
    // cout<<"Circumference of circle is "<<c.circumference()<<endl;
    return 0;
}