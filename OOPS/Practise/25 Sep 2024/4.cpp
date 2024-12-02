/*
 Write a C++ program to create a class called Car that has private member variables for company, model, and year.
Implement member functions to get and set these variables.
*/
#include<iostream>
using namespace std;
class Car{
    private:string company;
    string model;
    int year;
    public:
    Car(string c, string m, int y){
        company=c;
        model=m;
        year=y;
    }
    void get(){
        cout<<"Company: "<<company<<endl;
        cout<<"model:"<<model<<endl;
        cout<<"Year: "<<year<<endl;
    }
};
int main(){
    Car c("Toyota", "Camry", 2020);
    c.get();
}