/*
 Write a C++ program to implement a class called Date that has private member variables for day, month, and year. 
 Include member functions to set and get these variables, as well as to validate if the date is valid.
*/
#include <iostream>
using namespace std;
class Date{
    private:
    int day;
    int month;
    int year;
    public:Date(int d,int m,int y){
        day=d;
        month=m;
        year=y;
    }
    void setDay(int d){
        if(d>0 && d<=31)
        {
            day=d;
        }
        else
        {
            cout<<"Invalid day"<<endl;
        }
    }
    void setMonth(int m){
        if(m>0 && m<=12)
        {
            month=m;
        }
        else
        {
            cout<<"Invalid month"<<endl;
        }
    }
    void setYear(int y){
        if(y>0){
            year=y;
        }
        else{
            cout<<"Invalid year"<<endl;
        }
    }
    int getDay(){
        return day;
    }
    int getMonth(){
        return month;
    }
    int getYear(){
        return year;
    }
};
int main(){
    Date d(1,1,2020);
    d.setDay(30);
    d.setMonth(12);
    d.setYear(2021);
    cout<<"Day: "<<d.getDay()<<endl;
    cout<<"Month: "<<d.getMonth()<<endl;
    cout<<"Year: "<<d.getYear()<<endl;
    return 0;
}