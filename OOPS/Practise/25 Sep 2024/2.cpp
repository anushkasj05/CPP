/* 
Write a C++ program to create a class called Rectangle that has private member variables for length and width.
Implement member functions to calculate the rectangle's area and perimeter.
*/
#include<iostream>
using namespace std;
class Rectangle{
    private:int length,width;
    public:Rectangle(int l,int w){
        length=l;
        width=w;
    }
    int area(){
        return length*width;
    }
    int perimeter(){
        return 2*(length+width);
    }
    int display()
    {
        cout<<"Area: "<<area()<<endl;
        cout<<"Perimeter: "<<perimeter()<<endl;
    }
};
int main()
{
    Rectangle r(12,5);
    r.display();
}