/* 
Write a C++ program to create a class called Person that has private member variables for name, age and country. 
Implement member functions to set and get the values of these variables.
*/
#include<iostream>
#include<string>
using namespace std;
class Person{
    private: char name[20];
    char country[20];
    int age;
    public:void setDetails(char *n,int a,char *c){
        strcpy(name,n);
        age=a;
        strcpy(country,c);
    }
    void getDetails(){
        cout<<"Name: "<<name<<endl; 
        cout<<"Age: "<<age<<endl;
        cout<<"Country: "<<country<<endl;
    }
};
int main(){
    Person p;
    p.setDetails("John",19,"India");
    p.getDetails();
}