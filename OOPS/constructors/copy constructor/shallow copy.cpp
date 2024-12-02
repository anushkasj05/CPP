// shallow copy constructor
#include<iostream>
#include<string.h>
using namespace std;
class student{
     char *name;
    public:student(char *s){
        name = new char[20];// new ->dynamic memory cation
        strcpy(name,s);// s will be copied in name 
    }
    void display(){
        cout<<name<<endl;
    }
    void concate(char *s){
        strcat(name,s);
    }
};
int main(){
    student stu("amit");
    stu.display();
    student stu2(stu);
    stu2.display();// shallow copy
    stu.concate("divyansh");
    stu.display();
    stu2.display();
}