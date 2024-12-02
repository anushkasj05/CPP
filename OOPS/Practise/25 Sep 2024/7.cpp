/*
 Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary.
  Include member functions to calculate and set salary based on employee performance.
*/
#include <iostream>
#include<string>
using namespace std;
class Employee {
    private:
    char name[20];
    int employeeID;
    double salary;
    public:Employee(char *n,int eid,int sal){
        strcpy(name,n);
        employeeID=eid;
        salary=sal;
    }
    void setSalary(int sal){
        if(sal>0)
        {
            salary=sal;
        }
        else{
            cout<<"Invalid salary"<<endl;
        }
    }
    void calculateSalary(int bonus){
        salary=salary+bonus;
    }
    void displayDetails(){
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee ID: "<<employeeID<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main(){
    Employee emp("Anushka",101,5000);
    emp.displayDetails();
    emp.setSalary(6000);
    emp.displayDetails();
    emp.calculateSalary(1000);
    emp.displayDetails();
    return 0;
}