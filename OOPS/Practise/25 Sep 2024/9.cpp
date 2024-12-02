/*
Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks.
Include member functions to calculate the grade based on the marks and display the student's information.
*/
#include <iostream>
#include <string>
using namespace std;
class Student{
    private:string name;
    int clas;
    int rollnumber;
    int marks;
    public:
    void setdata(string n,int c,int r,int m){
        name=n;
        clas=c;
        rollnumber=r;
        marks=m;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Class: "<<clas<<endl;
        cout<<"Roll Number: "<<rollnumber<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
    void calculategrade(){
        if(marks>=90){
        cout<<"Grade: A"<<endl;
        }
        else if(marks>=80){
            cout<<"Grade: B"<<endl;
        }
        else if(marks>=70){
            cout<<"Grade: C"<<endl;
        }
        else if(marks>=60){
            cout<<"Grade: D"<<endl;
        }
        else{
            cout<<"Grade: F"<<endl;
        }
    }
};
int main(){
    Student s;
    s.setdata("Anushka",12,5,99);
    s.display();
    s.calculategrade();
    return 0;
}